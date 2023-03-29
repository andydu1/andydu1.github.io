---
layout: single
title: "Microfluidic Mixer"
excerpt: "Homogeneous microfluidic mixer created with stereolithography (SLA) 3D printing."
header:
  image: /assets/img/pliers-v3-5.JPG
  teaser: /assets/img/pliers-v3-4.JPG
gallery:
  - image_path: assets/img/pliers-render-1.png
  - image_path: assets/img/pliers-render-2.png
  - image_path: assets/img/pliers-v3-1.png
  - image_path: assets/img/pliers-v3-3.png
   
---

## Background

* **Microfluidic mixing** aims to achieve thorough and rapid mixing of multiple fluid samples on a microscale level
  * The small size of the flow channels in these mixers increases the surface to volume ratio when compared to macro-scale mixers, making these devices useful in many applications
  * These devices have a considerable impact on the fields of _biomedical diagnostics and drug development_ as well as the _food and chemical industries_
  * Specific applications of microfluidic mixing include:
     * Sample dilution
     * Reagent homogenization
     * Chemical or biological reactions
* However, the microchannels present a challenge due to the Reynolds numbers in the channels
  * For example, typical water-based microfluidic systems have Reynolds number on the order of 0.1
  * Contributing factors include:
     * Small hydraulic diameter 
     * Low kinetic viscosity 
     * Low flow velocity of the solution(s)
* Unlike larger macro-scale mixer devices, **turbulent mixing does not occur** in these low Reynolds number regimes. 
* Flows in microfluidic devices are **almost always laminar** in nature, making **thorough mixing a key challenge** within microfluidics since these devices cannot take advantage of turbulent mixing.
* As a result, microfluidic homogeneous mixers rely solely on **diffusive mixing**
  * Diffusive mixing is an inherently slower process and requires a long channel to achieve sufficient mixing
  * The aim of microfluidic mixing schemes is to enhance the mixing efficiency by _speeding up the time required_ to achieve adequate mixing, and/or by _shortening the channel length_ required
* There are two approaches to microfluidic mixing: **active** and **passive** mixers
  * **Active mixers**: improve the mixing performance by applying external forces to the fluid flows to accelerate the diffusion. Active mixing schemes include:
     * Acoustic/Ultrasonic
     * Dielectrophoretic
     * Electrokinetic time-pulse
     * Electrohydrodynamic force
     * Thermal actuation
     * Magneto-hydrodynamic flow
     * Electrokinetic instability
  * **Passive mixers**: the microchannel configuration is designed to increase the contact area and/or the contact time of both samples. While no external energy or stimulus is required, passive schemes typically result in a lower mixing efficiency than active schemes. Passive mixing schemes include:
     * Lamination
     * Zig-zag channels
     * 3D serpentine structures
     * Embedded barriers
     * Twisted channels
     * Surface chemistry

## Design Description
* A negative mold of the microfluidic mixer was created, cast with polydimethylsiloxane (PDMS), and bonded to a glass slide
  * Insert instructions here
* The device has four sections, each using a different passive mixing scheme:
  1. Zig-zag channels
  2. Three-dimensional ridges
  3. Intersecting channels
  4. Inclined mixer
* The inclusion of 4 sections forces the two samples to mix both in the XY directions (sections 1 and 3) as well as in the Z direction (sections 2 and 4)
* **Zig-zag channels** are one of the most popular passive mixing methods due to it being control-free and relatively simple to design and fabricate
* The inclusion of **3D ridges** is intended to induce chaotic advection in the mixer, particularly in the Z-direction, by forcing flows with transverse components to fold fluid elements over the channel cross-section
* **Intersecting channels** can be used to split, rearrange, and combine component streams to enhance mixing. The two species merge into a single large stream and flow along a main channel. The intersecting channels form connections between the parallel segments of the main channel, allowing fluid on one side of the main channel to interact with fluid on the other side of the channel.
* Similar to the 3D ridges, the **inclined walls** in section 4 are designed to induce a chaotic mixing effect within the fluid stream. As the fluid traverses this section, it sways from side to side, resulting in a chaotic advection effect.

## Justification for Stereolithography
* A **Form 3 stereolithography (SLA) printer** was used to 3D print the negative mold of the microfluidic mixer
  * SLA falls under the category of _vat photopolymerization (VPP)_, which constructs a model layer by layer out of a vat of liquid photopolymer resin. 
    * An ultraviolet (UV) laser is used to cure the resin on each layer, and a platform moves the object being made downwards after each new layer is cured.
  * VPP provides **extremely high-resolution** printing capabilities, with the minimum feature size being determined by the laser spot size (in this case, 85 um)
* Other fabrication techniques can also be used to create microfluidic devices, such as **photolithography**, a traditional technique that was first used to create microfluidic devices
  * However, microfluidics fabricated with photolithography have a _much higher cost_ and can also _take much longer to fabricate_
    * Devices fabricated with photolithography can cost ~10x more than devices fabricated with SLA, largely due to the high maintenance costs of the equipment and facilities needed to run photolithography processes
    * Ordering a microfluidic device fabricated with photolithography can also result in lead times of up to two months
      * SLA parts can be ready in a matter of hours, allowing for rapid testing and prototpyping of microfluidic devices
  * Traditional microfluidic devices made with photolithography are limited to a  two-dimensional plane and a rectangular cross-sectional area
    * SLA-printed microfluidics are limited only by what the user models in CAD, allowing for channels to take any three-dimensional path
    * **This is particularly beneficial for a homogeneous mixer**, necessitating the use of SLA printing

## Video
<iframe width="560" height="315" src="https://www.youtube.com/embed/mmE74WHk6mE" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>


## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e4306b1a15e68c111ea?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


## Design
### Materials and Print Settings
* Traditional PLA filament was used for the hard plastic components (handles and tips). _TPU 95A_ was used as the flexible filament for the spring component. 
* A [MakerGear M3-ID](https://makergear.com/collections/m3-series-3d-printers/products/m3-id) printer with 0.35 mm dual extrusion nozzles was used to dual extrude both filaments.
* The pliers were printed with _wipe tower enabled_ to purge each nozzle prior to switching extruders for each layer, and to reduce the amount of ooze contamination in the part itself. 
  * This was particularly necessary for the TPU filament, which oozed a substantial amount when idle. 
  * For most layers, the TPU extruder did not start extruding until over half its layer on the wipe tower was printed.
  * While the wipe tower was necessary, the size of the wipe tower was decreased from a width of 60 mm to 40 mm to optimize the time and material required to print the pliers.
* The bed temperature was set to **60 C**, nozzle 1 (PLA) was set to **215 C** and nozzle 2 (TPU) was set to **240 C**.
* The maximum speed of the TPU extruder was capped at **25 mm/s** to ensure that the extrusion gear did not grind the TPU filament too quickly and cause a jam. The retraction speed of the TPU extruder was capped at **15 mm/s**.

### Flexible Spring Component
* A _3x3 TPU square lattice_ was used as the flexible spring component. 
  * This allows the plier tips to close when the handles are squeezed, but also reverts back to the original 'open' position when the handles are released.
* A square lattice was selected so that the square shape would be able to flex into a parallelogram.
* Due to the nature of the flexible TPU and the square lattice shape, the joint is also _able to flex outwards when the handles are pulled apart_. This allows for the maximum jaw capacity to actually increase beyond the resting jaw capacity.

### Interface Connections
![see through 4](/assets/img/pliers-see-through-4.png)

* Since PLA and TPU do not stick together naturally, a _mechanical joint mechanism_ was needed between the TPU and PLA parts to ensure that the handles and tips stayed connected to the flexible spring component.
* The capabilities of dual extrusion 3D printing were leveraged to create an _internal hook and loop mechanism._
  * Each connection face has a _2x7 grid_ of hook and loop connectors.
  * TPU hooks loop through PLA rods that are inside the PLA components. 
  * As each layer is printed, _the PLA rods are enclosed by the TPU hooks_ around them, physically constraining the two parts together. 
* This joint mechanism can _only be made with dual extrusion 3D printing_ since there are internal overlaps between different components.

### PLA Components
* Circular cutouts were added to the handles to decrease the amount of filament used and to minimize print time.
* Small, semicircular ridges were added to the tip surfaces to increase the gripping abilities of the pliers.


## Phyiscal Specifications
![dimensions](/assets/img/plier dimensions.png)

* **Jaw Length**: 21.5 mm
* **Resting Jaw Capacity**: 8.5 mm
* **Maximum Jaw Capacity**: 24 mm


## 3D Printed Components

| Component | Image |
| :---: | :---: |
| Joint | <img src="/assets/img/pliers joint.png" alt="joint" width="35%"/> |
| Handle (Left) | <img src="/assets/img/pliers handle 1.png" alt="left handle" width="35%"/> |
| Handle (Right) | <img src="/assets/img/pliers handle 2.png" alt="right handle" width="35%"/> |
| Tip (Left) | <img src="/assets/img/pliers tip 1.png" alt="left tip" width="35%"/> |
| Tip (Right) | <img src="/assets/img/pliers tip 2.png" alt="right tip" width="35%"/> |


## Design Progression
### Version 1
![version 1](/assets/img/pliers-v1-3.png)

* Version 1 of the pliers used a single T-shaped internal joint mechanism to connect the PLA and TPU components. 
  * This proved to be too weak to firmly hold the two materials together. When the handles were squeezed, the PLA would separate from the TPU with a lot of wiggle room left over.
* A circular-shaped lattice was used for the flexible joint component. 
  * The circular shape of the matrix prevented the squares inside it from flexing into a kite shape, which was necessary to transmit the force of the handles being squeezed to the tips.
* The corners of the flexible joint piece also proved to be too thick to properly flex. Even when the tips were directly pressed towards each other, they would move very minimally due to the TPU acting almost as a non-flexible material because of the thickness.

### Version 2
![version 2](/assets/img/pliers-v2-3.png)
* Version 2 moved away from the T-shaped internal connectors to the hook-and-look connection mechanism. However, the TPU hooks used in V2 proved to be too small. 
  * The holes in the hooks were too small to allow a substantial amount of PLA to be deposited within them, preventing a strong PLA rod from being formed that the hook could attach to.
  * This was improved in Version 3 (the final version) by increasing the size of each individual hook and loop and decreasing the number of hooks and loops used.
* The flexible joint component was changed from a circular shape to a square shape.
  * This was much improved from V1, allowing the entire joint to flex and then return to its original position.
* The thickness of TPU used was also decreased in V2, which resulted in much more flexible behavior.


{% include gallery caption="Flexible Pliers Gallery" %}
