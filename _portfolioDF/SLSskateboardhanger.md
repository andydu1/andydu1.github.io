---
layout: single
title: "Skateboard Truck Hanger"
excerpt: "Generatively-designed skateboard truck 3D printed with a Fuse 1 Selective Laser Sintering (SLS) powder printer."
header:
  image: /assets/img/skateboard2.jpg
  teaser: /assets/img/skateboard9.jpg
gallery:
  - image_path: assets/img/skateboard3.jpg
  - image_path: assets/img/skateboard4.jpg
  - image_path: assets/img/skateboard6.jpg
  - image_path: assets/img/skateboard7.JPG

---

## Background



## Generative Design Setup
### Design
![](/assets/img/podium2.png)
-   The podium design includes a top, shelf, and base with the Dr. D Flo logo placed on the front face

-   "DIGITAL FABRICATION" is also placed on the top lip

-   To ensure printability, the text size was maximized to ensure that no features were smaller than 9 mm in width

-   Height: 48"

-   Top surface: 25" x 16", angled at 15 degrees

### Preserve Geometry
![](/assets/img/podium21.png)
_Preserved geometry for the generative study._

-   To setup the generative design for the podium, several areas were designated as preserved geometry

    -   These are bodies that are incorporated into the final design shape but are not manipulated

-   For the podium, this included the top, shelf, base, and logo

### Obstacle Geometry
![](/assets/img/podium20.png)
_Obstacle geometry for the generative study._

-   Additionally, several areas were designated as obstacles where no material should be placed in the general design

  -   "Empty space" in the final generated design

-   The space above the shelf was made into an obstacle to ensure that there would be space to place items on the shelf

-   An obstacle was placed over the entire front side of the podium to ensure that it was a flat surface that could be printed directly onto the build plate

-   Another obstacle was located on the back side of the podium to ensure that no material blocked the entrance of the shelf and that users could still access it

### Loads and Constraints
![](/assets/img/podium22.png)
_Load cases applied to the podium._
-   A fixed constraint was placed on the bottom side of the podium base where the podium would meet the floor

    -   This constrained the podium in the x, y, and z directions from the base

-   Three load cases were considered in the generative design:

| Load Case |          Description          |   Magnitude  |
|:---------:|:-----------------------------:|:------------:|
|     1     |  Vertical normal load on top  | 250 lb-force |
|     2     | Vertical normal load on shelf | 100 lb-force |
|     3     |  Horizontal shear load on top | 100 lb-force |

### Design Criteria

-   The generative design objective was set to "Minimize Mass"

-   Additive manufacturing in the Y+ direction (front face flat on the build plate) was evaluated as well as an unrestricted manufacturing case

-   An overhang angle of 45 degrees and a minimum thickness of 30 mm were considered

-   ABS material was used for the model

### Post-Processing and Validation
![](/assets/img/podium23.png)
![](/assets/img/podium24.png)
_Simulation results for von Mises stress (top) and maximum displacement (bottom) for load cases 1-3._

-   Following the generative design, the design was modified in the Form workspace to ensure that all overhangs were greater than 45 degrees for printability

-   Simulations were performed on the modified design to ensure that the altered bodies did not compromise the structural integrity of the podium

-   It was found that the podium was able to comfortably withstand all the load cases presented, with a minimum safety factor of 5.435
  
## Scale Model
![](/assets/img/podium29.JPG)
![](/assets/img/podium34.png)

To verify that the generative design model had no overhangs less than 45 degrees and therefore was able to be printed without supports, a scale model was printed using a MakerGear M3-ID printer. To accurately scale the nozzle diameters between the MakerGear (nozzle diameter of 0.35 mm) and the large-format 3D printer (nozzle diameter of 3 mm), the scale model was printed at 11.67% of the actual model size.

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6ec75ed1f7991e5264?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>



{% include gallery caption="SLS Skateboard Truck Hanger Gallery" %}
