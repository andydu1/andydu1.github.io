---
layout: single
title: "Microfluidic Mixer"
excerpt: "Homogeneous microfluidic mixer created with stereolithography (SLA) 3D printing."
header:
  image: /assets/img/mixer3.JPG
  teaser: /assets/img/mixer10.JPG
gallery:
  - image_path: assets/img/mixer5.png
  - image_path: assets/img/mixer6.png
  - image_path: assets/img/mixer7.png
   
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
* 2.0mm diameter posts were included at both inlets and the outlet to create an interface for connecting to the microfluidic tubing
  * Connection posts were also included in between each mixing section to evaluate the intermediate mixing results of each mixing scheme


<img src="/assets/img/mixer11.png" alt="zig zag" width="75%"/>
* **Zig-zag channels** are one of the most popular passive mixing methods due to it being control-free and relatively simple to design and fabricate


<img src="/assets/img/mixer12.png" alt="zig zag" width="75%"/>
* The inclusion of **3D ridges** is intended to induce chaotic advection in the mixer, particularly in the Z-direction, by forcing flows with transverse components to fold fluid elements over the channel cross-section


<img src="/assets/img/mixer13.png" alt="zig zag" width="75%"/>
* **Intersecting channels** can be used to split, rearrange, and combine component streams to enhance mixing. The two species merge into a single large stream and flow along a main channel. The intersecting channels form connections between the parallel segments of the main channel, allowing fluid on one side of the main channel to interact with fluid on the other side of the channel.


<img src="/assets/img/mixer14.png" alt="zig zag" width="75%"/>
* Similar to the 3D ridges, the **inclined walls** in section 4 are designed to induce a chaotic mixing effect within the fluid stream. As the fluid traverses this section, it sways from side to side, resulting in a chaotic advection effect.
* Pertinent dimensions of the design include:
  * Total length:  80.00 mm
  * Total width: 30.00 mm
  * Outer height: 5.50 mm
  * Inner height: 4.50 mm
  * Wall thickness: 2.50 mm
  * Channel height: 2.50 mm
  * Channel width: 2.00 mm
  * Microfluidic connection post diameter: 2.00 mm
  * Section length: 16.25 mm

 ![mixer dimensions 1](/assets/img/mixer15.png)
 ![mixer dimensions 2](/assets/img/mixer16.png)


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
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e4381a449e85df15f9a?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## References

"Guide to Microfluidics and Millifluidics, and Lab-on-a-Chip Manufacturing." _Formlabs_, https://formlabs.com/blog/microfluidics-millifluidics-lab-on-a-chip-manufacturing/. Accessed 29 March 2023.

Hung, Chia -, et al. "Experimental Study on Microfluidic Mixing with Different Zigzag Angles." _NCBI_, 31 August 2019, https://www.ncbi.nlm.nih.gov/pmc/articles/PMC6780503/. Accessed 29 March 2023.

"Microfluidic Mixing: A Review - PMC." _NCBI_, 18 May 2011, https://www.ncbi.nlm.nih.gov/pmc/articles/PMC3116190/. Accessed 29 March 2023.

"An overview of microfluidic mixing application." _DORAS_, https://doras.dcu.ie/20464/1/_Naher_AMR_2010_Overview_of_microfluidic_mixing.pdf. Accessed 29 March 2023.

Ward, Kevin. "Mixing in microfluidic devices and enhancement methods." _NCBI_, https://www.ncbi.nlm.nih.gov/pmc/articles/PMC4634658/. Accessed 29 March 2023.


{% include gallery caption="Microfluidic Mixer Gallery" %}
