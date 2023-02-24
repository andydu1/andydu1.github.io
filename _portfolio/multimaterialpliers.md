---
title: "Dual Extrusion Flexible Pliers"
excerpt: "Print-in-place, dual extrusion 3D printed flexible pliers."
header:
  image: /assets/img/pliers-v3-5.JPG
  teaser: /assets/img/pliers-v3-4.JPG
gallery:
  - image_path: assets/img/pliers-render-1.png
  - image_path: assets/img/pliers-render-2.png
  - image_path: assets/img/pliers-see-through-1.png
  - image_path: assets/img/pliers-see-through-2.png
  - image_path: assets/img/pliers-see-through-3.png
   
---

## Purpose

* Print-in-place models are a 3D printing concept where **fully functional objects with movable parts** can be designed and printed in a way that they **work immediately after removal from the print bed.**
* This concept is often seen in Hollywood representations of 3D printing, where **no post-processing (i.e. removing support material) or assembly is required** and parts work directly off the print bed.
* Print-in-place models can be created with traditional single material extrusion 3D printing by designing and orienting the object so there is ample clearance at joints to allow for motion or rotation. However, these parts are often unable to achieve smooth motion due to the material properties of solid plastic and the irregularities that arise from plastic FFF extrusion.
* The capabilities of **dual extrusion 3D printing** can be leveraged to improve the motion of funcitonal print-in-place parts. Flexible materials, such as **thermoplastic polyurethane (TPU)**, can be incorporated into these models to allow for smoother actuation of the functional mechanisms.
* To demonstrate the capabilities of dual extrusion 3D printing for functional print-in-place parts, **flexible needle nose pliers** were created using both PLA and TPU that are capable of gripping and picking up a 3 mm diameter plastic pellet.

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e4306b1a15e68c111ea?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Design
### Materials and Print Settings
* Traditional PLA filament was used for the hard plastic components (handles and tips). TPU 95A was used as the flexible filament for the spring component. 
* A [MakerGear M3-ID](https://makergear.com/collections/m3-series-3d-printers/products/m3-id) printer with 0.35 mm nozzles was used to dual extrude both filaments.
* The pliers were printed with wipe tower enabled to purge each nozzle prior to switching extruders for each layer, and to reduce the amount of ooze contamination in the part itself. 

  This was particularly necessary for the TPU filament, which oozed a substantial amount when idle. For most layers, the TPU extruder did not start extruding until over half its layer on the wipe tower was printed.

* The maximum speed of the TPU extruder was capped at 25 mm/s to ensure that the extrusion gear did not grind the TPU filament too quickly and cause a jam. The retraction speed of the TPU extruder was capped at 15 mm/s.

### Flexible Spring Component
* A 3x3 TPU square lattice was used as the flexible spring component. This allows the plier tips to close when the handles are squeezed, but also reverts back to the original 'open' position when the handles are released.
* A square lattice was selected so that the square shape would be able to flex into a parallelogram.

### Interface Connections
* Since PLA and TPU do not stick together naturally, a connection mechanism was needed for the interfaces between the TPU and PLA parts to ensure that the handles and tips stayed connected to the flexible spring component.
* The capabilities of dual extrusion 3D printing were leveraged to create an **internal hook and loop mechanism.**
* Each connection face has a 2x7 grid of hook and loop connectors.
* TPU hooks loop through ...

### PLA Components
* Circular cutouts were added to the handles to decrease the amount of filament used and to minimize print time.
* Small, semicircular ridges were added to the tip surfaces to increase the gripping abilities of the pliers.

## 3D Printed Custom Components

| Component | Image |
| :---: | :---: |
| Back Barrel Stabilizer (Lower) | <img src="/assets/img/back-lower.png" alt="back lower" width="35%"/> |
| Back Barrel Stabilizer (Upper) | <img src="/assets/img/back-upper.PNG" alt="back upper" width="35%"/> |
| Front Barrel Stabilizer (Lower) | <img src="/assets/img/front-lower.png" alt="front lower" width="35%"/> |
| Front Barrel Stabilizer (Upper) | <img src="/assets/img/front-upper.png" alt="front upper" width="35%"/> |
| Plunger Holder (Lower) | <img src="/assets/img/plunger-lower.png" alt="plunger lower" width="35%"/> |
| Plunger Holder (Upper) | <img src="/assets/img/plunger-upper.png" alt="plunger-upper" width="35%"/> |
| Motor Mount | <img src="/assets/img/motor-mount.png" alt="motor mount" width="35%"/> |
| Enclosure Box | <img src="/assets/img/box.png" alt="box" width="35%"/> |
| Lid | <img src="/assets/img/lid.png" alt="lid" width="35%"/> |


{% include gallery caption="Syringe Pump Gallery" %}
