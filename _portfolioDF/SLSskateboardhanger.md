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
### Generative Design
Generative design (GD) is a design exploration process where various algorithms and artificial intelligence (AI) are used to create various design options based on performance requirements and parameters defined by the user. Through an iterative process, the software is able to evaluate all possible permutations of a given design setup and provide the most ideal solution based on the user parameters. This allows for many parts to be light-weighted, with the generative design process removing unnecessary material while maintaining components that are critical for structural integrity. Additionally, single parts can be created using generative design that replace complex assemblies consisting of many parts. 

While generative design can provide extremely significant optimization of parts, there are some potential drawbacks. Since the target constraints and parameters are determined by the user, incorrect application of loads and boundary conditions can lead to results being generated that don’t accurately reflect the necessary environmental conditions that the part in question must withstand. Additionally, it can be extremely computationally intensive to evaluate all the iterations and possibilities for models.

A key drawback of generative design that can be addressed by powder-bed fusion and selective laser sintering is the fact that AI-generated parts are often composed from strange, organic-shaped form bodies that are impossible to create through traditional manufacturing techniques. The generative design process prioritizes meeting the load constraints placed onto it with ease of manufacturing acting as a secondary concern.


### Selective Laser Sintering (SLS)
One of the very first commercialized additive manufacturing technologies was powder-bed fusion (PBF), developed in the mid-1980s at the University of Texas at Austin. PBF uses either a laser or electron beam to fuse powdered particles of material together. All PBF processes are layer-by-layer procedures, with fresh powder being spread smoothly on top of previously fused layers. Selective laser sintering (SLS) is a type of SLS where a high-powered laser is used to fuse small particles of powdered material together. The powder, which can be polymer powder (pSLS) or metal powder (mSLS), is heated to just below its melting temperature through radiant- and convection-based heating in the build chamber. The laser the provides the small amount of energy needed to melt the powder while scanning the powder bed surface. As the print bed moves down and each new layer of powder is spread thinly over the previous layers, the laser gradually fuses the powder into a desired 3D geometry.

SLS has several key advantages over other additive manufacturing methods such as SLA and FFF. SLS is known for creating parts that provide some of the strongest mechanical properties of any additively manufactured components. The strength and stiffness of SLS-manufactured parts are comparable to injection molded components, typically regarded as the standard for additively manufactured parts. The part orientation in the print volume is also not critical; there is no need to worry about cupping like in SLA or need for flat geometry on the part to orient on a build plate like in FFF. When the build volume is properly packed with many parts, SLS is one of the fastest additive manufacturing technologies.


### Pairing of SLS and GD
One of the biggest advantages that SLS provides is the ability to easily print complex geometries without the need for supports. Since SLS is a layer-by-layer process where the powder bed is recoated each time, the loose unsintered powder is able to act as a self-supporting structure for any material fused above it. This ability to easily print complex, odd-shaped geometries makes SLS an excellent choice for use in conjunction with generative design, which often makes strange, organic shapes that are difficult to manufacture, both with conventional manufacturing techniques like injection molding or CNC machining, and even with other additive manufacturing techniques like FFF. This removes many of the constraints on generative design by allowing the AI to create the most optimal geometries for the given load cases with little consideration for manufacturing constraints.

Additionally, SLS is a versatile technology in terms of compatibility with different materials. While the material used in this skateboard truck hanger project was nylon, SLS can be used with a wide range of materials including other polymers, metals, and ceramics. This gives more possibilities for generative design outcomes and more materials that can be considered for optimizing a design to support load cases. The pairing of PBF technologies with generative design could fundamentally change the role of the engineer in the design process. Freed from many of the constraints of traditional manufacturing techniques, engineers can move their focus from modeling design solutions to refining and setting up the generative design environment that can use digital tools to create an optimized solution.


### Applications
Together, technologies like SLS and generative design have vast applications that can improve work flow and end results tremendously, particularly in the aerospace and automotive fields. A key ability of using generative design in conjunction with SLS is the ability to lightweight parts. This is directly correlated to performance efficiency in the aerospace field, particularly for aircraft and spacecraft when strength and stiffness are able to be maintained when weight is reduced through generative design. The ability to rapidly prototype and manufacture components has been widely taken advantage of in the aerospace field, particularly for testing spare parts in engines, prototyping various aircraft components, molding turbocharger impellers and blades, creating truss lattices for wings, and more. Similarly, the combination of generative design and SLS has been extremely valuable in the automotive industry as well. Nilesh Dale, senior manager of Advanced Materials and Technology Research at the Nissan Technical Center North Ameraica, pointed out that “in addition to quick prototyping, the main benefit we have seen [from additive manufacturing technologies] is actually the combination of two technologies: generative design and 3D printing, which offer lightweighting”. Through the use of new metal alloys and composites, generative design and SLS have been used in the automotive field to simplify assemblies found throughout vehicles into more optimized lightweight parts.

<details><summary>References</summary>
<ul>
<li style="font-weight: 400;"><a href="https://www.lboro.ac.uk/research/amrg/about/the7categoriesofadditivemanufacturing/powderbedfusion/"><span style="font-weight: 400;">https://www.lboro.ac.uk/research/amrg/about/the7categoriesofadditivemanufacturing/powderbedfusion/</span></a></li>
<li style="font-weight: 400;"><a href="https://formlabs.com/blog/what-is-selective-laser-sintering/"><span style="font-weight: 400;">https://formlabs.com/blog/what-is-selective-laser-sintering/</span></a></li>
<li style="font-weight: 400;"><a href="https://commons.erau.edu/cgi/viewcontent.cgi?article=1708&amp;context=ijaaa"><span style="font-weight: 400;">https://commons.erau.edu/cgi/viewcontent.cgi?article=1708&amp;context=ijaaa</span></a></li>
<li style="font-weight: 400;"><a href="https://www.additivemanufacturing.media/articles/automotive-tech-center-sees-benefits-and-challenges-of-am"><span style="font-weight: 400;">https://www.additivemanufacturing.media/articles/automotive-tech-center-sees-benefits-and-challenges-of-am</span></a></li>
<li style="font-weight: 400;"><span style="font-weight: 400;"><a href="https://commons.erau.edu/cgi/viewcontent.cgi?article=1708&amp;context=ijaaa">https://commons.erau.edu/cgi/viewcontent.cgi?article=1708&amp;context=ijaaa</a></span></li>
<li style="font-weight: 400;"><a href="https://reader.elsevier.com/reader/sd/pii/S0264127521005633?token=B1CD861B0A78ECE7BBFAEA1E256A86E26AC1733D328AB2C3E0E341E4AF16041D4A464FF67EE20F0605062D67A4BF0E6C&amp;originRegion=us-east-1&amp;originCreation=20230428014505"><span style="font-weight: 400;">https://reader.elsevier.com/reader/sd/pii/S0264127521005633?token=B1CD861B0A78ECE7BBFAEA1E256A86E26AC1733D328AB2C3E0E341E4AF16041D4A464FF67EE20F0605062D67A4BF0E6C&amp;originRegion=us-east-1&amp;originCreation=20230428014505</span></a></li>
</ul>
</details>



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
### Aluminum Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e7b332c75c2413f22?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

### Nylon Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e1f699acb374c7209?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="SLS Skateboard Truck Hanger Gallery" %}
