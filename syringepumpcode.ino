// Import libraries
#include <AccelStepper.h>
#include <LiquidCrystal.h>

// Instantiate stepper motor
AccelStepper stepperX(AccelStepper::DRIVER, 6, 5);

// Instantiate buttons + LED +potentiometer
int start=23;
int limit=25;
int forward=22;
int reverse=24;
int red_LED = 4;
int green_LED = 3;
int blue_LED = 2;
int pot = A0;
bool start_press = false;
bool forward_press = false;
bool reverse_press = false;
bool new_process = true;

// Instantiate LCD
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13, v0 = 7;
int contrast=10;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

float big= 18.6; // mm
float small= 11.7; // mm

/********ENTER VARIABLES BELOW********/
float syringe_diameter = big;         // mm, CHOOSE 'big' OR 'small'
float flowrate = 0;                   // SET FLOW RATE: 0.012 - 300 mL/min
float volume = 20;                    // SET CURRENT VOLUME: 0-20 mL

// Steprate claculations
float flowrate_mms = flowrate*1000/60;                    // mm^3/s
float syringe_area = 3.1415*sq((syringe_diameter/2.0));   // mm^2
float distance_rate = flowrate_mms/syringe_area;          // mm/s
float steprate = distance_rate/2*200*4;                   // step/s

// Time remaining calculations
float time_tot_s = volume*60/flowrate;                    // total time in seconds
int time_tot_sround = round(time_tot_s);                  // round
int time_sec = time_tot_sround % 60;                      // s total
int time_hr = round(time_tot_sround/3600);                // h total
int time_min = round(time_tot_sround/60)-60*time_hr;      // m total
float start_time = 0;                                     // set start time = 0
float time_elapsed = 0;                                   // set time elapsed = 0
float time_rem_s = time_tot_s;                            // set time remaining = total time
int time_rem_sround = time_tot_sround;


/*****SETUP*****/
void setup() {

  // Start serial monitor
  Serial.begin(9600);

  // Set max speed
  stepperX.setMaxSpeed(4000); // Max speed based on Arduino

  // Set button + LED pins to correct modes
  pinMode(start, INPUT_PULLUP);
  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);
  pinMode(limit, INPUT_PULLUP);
  pinMode(forward, INPUT_PULLUP);
  pinMode(reverse, INPUT_PULLUP);
  
  // LCD stuff
  analogWrite(v0, contrast);
  lcd.begin(16,2);
  lcd.print("flow");
  lcd.setCursor(0,1);
  lcd.print("time");
} // end setup


/*****LOOP*****/
void loop() {
  
  // If Start button is pressed and its a new process
  if (digitalRead(start) == LOW && new_process == true){
    new_process=false;              // Record that a new process has been started, change to false
  } // end if

  // If Reverse button is being pressed + hasn't been pressed yet
  else if (digitalRead(reverse) == LOW && reverse_press == false) {
    stepperX.setSpeed(-400);        // Set speed to reverse direction
    start_press = false;            // Set Start button pressed status to 'False'
    forward_press = false;          // Set Forward button pressed status to 'False'
    reverse_press = true;           // Change Reverse button pressed status to 'True'
  } // end else if

  // If Reverse button is being pressed + has already been pressed
  else if (digitalRead(reverse) == LOW && reverse_press == true) {
    stepperX.runSpeed();            // Run the motor
    analogWrite(red_LED, 255);      // Set LED to PURPLE
    analogWrite(green_LED, 0);
    analogWrite(blue_LED, 255);
  } // end else if

  // If limit switch is pressed
  else if (digitalRead(limit) == LOW) {
    analogWrite(red_LED, 255);      // Set LED to RED
    analogWrite(green_LED, 0);
    analogWrite(blue_LED, 0);
    start_press = false;            // Reset Start button pressed status to 'False'
    time_tot_s=time_rem_s;          // Reset timer
    time_tot_sround=time_rem_sround;
    new_process = true;
    lcd.setCursor(5,1);
    lcd.print("0:00:00");           // Make sure time remaining reads 0:00:00
  } // end else if

  // If Forward button is being pressed + hasn't been pressed yet
  else if (digitalRead(forward) == LOW && forward_press == false) {
    stepperX.setSpeed(400);         // Set speed to forward direction
    start_press = false;            // Set Start button pressed status to 'False'
    forward_press = true;           // Change Forward button pressed status to 'True'
    reverse_press = false;          // Set Reverse button pressed status to 'False'
  } // end else if

  // If Forward button is being pressed + has already been pressed
  else if (digitalRead(forward) == LOW && forward_press == true) {
    stepperX.runSpeed();            // Run the motor
    analogWrite(red_LED, 0);        // Set LED to BLUE
    analogWrite(green_LED, 0);
    analogWrite(blue_LED, 255);
  } // end else if

  // If Start button is being pressed + hasn't been pressed yet
  else if (digitalRead(start) == LOW && start_press == false) {
    stepperX.setSpeed(steprate);    // Set the speed to the steprate (determined by potentiometer)
    start_time=millis();            // Record the start time
    start_press = true;             // Change Start button pressed status to 'True'
    forward_press = false;          // Set Forward button pressed status to 'False'
    reverse_press = false;          // Set Reverse button pressed status to 'False'
    new_process = false;            // It is no longer a new process
  } // end else if

  // If Start button is being pressed + has already been pressed
  else if (digitalRead(start) == LOW && start_press == true) {
    stepperX.runSpeed();            // Run the motor
    analogWrite(red_LED, 0);        // Set LED to GREEN
    analogWrite(green_LED, 255);
    analogWrite(blue_LED, 0);

    // Time remaining calculations
    time_elapsed=(millis()-start_time)/1000;
    time_rem_s=time_tot_s-time_elapsed;
    time_rem_sround=round(time_rem_s);
    time_sec = time_rem_sround % 60;
    time_hr = round(time_rem_sround/3600);
    time_min = round(time_rem_sround/60)-60*time_hr;

    // Send time values to LCD
    lcd.setCursor(5,1);
    lcd.print(time_hr);
    lcd.print(":");
    if (time_min<10){
      lcd.print("0");
    } // end if
    lcd.print(time_min);
    lcd.print(":");
    if (time_sec<10) {
      lcd.print("0");
    } // end if
    lcd.print(time_sec);
  } // end else if

  // If nothing has been pressed yet + its a new process
  else if (new_process == true) {
    
    // Set LED to CYAN
    analogWrite(red_LED, 0);
    analogWrite(green_LED, 255);
    analogWrite(blue_LED, 255);

    // Potentiometer stuff
    float potVal=analogRead(pot);                       // Read the potentiometer
    float flowrate = potVal*10/1023;                    // Scale from 0-1023 to 0-10 mL/min
    flowrate_mms = flowrate*1000/60;                    // mm^3/s
    syringe_area = 3.1415*sq((syringe_diameter/2.0));   // mm^2
    distance_rate = flowrate_mms/syringe_area;          // mm/s
    steprate = distance_rate/2*200*4;                   // step/s
    
    // Time calculations
    time_tot_s = volume*60/flowrate;                    // total in seconds
    time_tot_sround = round(time_tot_s);
    time_sec = time_tot_sround % 60;                    // s total
    time_hr = round(time_tot_sround/3600);              // h total
    time_min = round(time_tot_sround/60)-60*time_hr;    // m total
    start_time = 0;
    time_elapsed = 0;
    time_rem_s = time_tot_s;
    time_rem_sround = time_tot_sround;
    
    // Send info to LCD 
    lcd.setCursor(5,0);
    lcd.print(flowrate);
    lcd.setCursor(5,1);
    lcd.print(time_hr);
    lcd.print(":");
    if (time_min<10){
      lcd.print("0");
    } // end if
    lcd.print(time_min);
    lcd.print(":");
    if (time_sec<10) {
      lcd.print("0");
    } // end if
    lcd.print(time_sec);
    lcd.print("     ");
    delay(500);
  } // end else if

  // If nothing is being pressed but it isn't a new process (Paused)
  else {

    // Set LED to YELLOW
    analogWrite(red_LED, 255);
    analogWrite(green_LED, 126);
    analogWrite(blue_LED, 0);
    
    start_press= false;                 // Set Start button pressed status to 'False'
    time_tot_s=time_rem_s;              // Reset timer
    time_tot_sround=time_rem_sround;
  } // end else
} // end LOOP
