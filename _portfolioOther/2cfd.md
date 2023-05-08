---
layout: single
title: "CFD Model of Spinning Football"
excerpt: "Aerodynamic study of a spinning American football in COMSOL Multiphysics."
header:
  image: /assets/img/cfd11.png
  teaser: /assets/img/cfd12.png

   
---
#### Spring 2023
##### ME 4263 Computational Fluid Dynamics and Multiphysics Modeling

## Introduction

  In this project, the aerodynamics of an American football were analyzed. The geometry of the football was simplified to an ellipsoidal body in 3D space under turbulent flow. The aspect ratio of the ellipsoid was varied and the effects on the lift and drag of the football were explored. Additionally, rotation of the football was considered in the model to assess its effect on lift and drag.

  Like all sports balls, the way air flows around a football plays a significant role in its flight. Understanding the effects of parameters such as ball shape and rotation speed on how the ball flies is an area of high interest to many parties involved with football. This includes companies that manufacture footballs such as Wilson as well as players and teams in the NFL that conduct research on the aerodynamics of a football to optimize flight performance. This project aims to provide a holistic analysis of the flight performance of a football using the simplified geometry of a 3D ellipsoid while considering factors such as aspect ratio and ball spiral rotation.
    
## Methods
### Description

  COMSOL Multiphysics was used to model the flow simulation of the football. The “Turbulent Flow, k-ε (spf)” physics module was used for 3D space dimension. Since ball rotation and angular velocity needed to be considered, a time-dependent study was considered, with values being calculated every 0.2 seconds between 0 and 1 seconds. The following variables were parameterized for use in the model:

![](/assets/img/cfd9.png)

  The values from the table above were determined based off real-world situations. Between 2008 and 2020, the average ball velocity of all quarterbacks who threw at the NFL Combine was around 54 mph, which corresponds to roughly 24 m/s. Additionally, a study on former New Orleans Saints quarterback Drew Brees’ throwing ability found that the rotational spin rate of his throws averaged about 600 rotations per minute, corresponding to about 62.81 rad/s. The ρ and μ densities were based on typical values for air at 25℃.

### Geometry and Boundary Conditions

  The ellipsoid geometry (elp1) sized based on the parameterized ellipsoid_short and ellipsoid¬_long was first built and centered at (0, 0, 0), oriented such that the pointed ends lie along the x-axis. A rectangular block (blk1) 1.25 m × 1.25 m × 2.25 m was then built around this geometry and centered at (0.25, 0, 0), placing the ellipsoid slightly closer to the inlet to allow the flow following the ellipsoid to fully develop. A Boolean difference (dif1) was taken to remove the volume of the ellipsoid from the block domain, and the geometry was finished with a Form Union.

  Within the Turbulent Flow, k-ε (spf) physics module, the density and dynamic viscosity within Fluid Properties 1 were set to the parameterized variables RHO and MU. The velocity field within Initial Values 1 was set to u=〈U,0,0〉  m/s. On the bounding box domain, one face was set as an inlet with normal inflow velocity of U¬_0=U m/s=24 m/s, while the other faces of the box were set to open boundaries.

![](/assets/img/cfd1.png)

  The boundary on the ellipsoid was set as a Wall boundary with “No slip” wall condition. For one set of analysis, wall movement was added to this boundary to incorporate a sliding wall motion. This allowed the wall of the ellipse to rotate at a set tangential velocity in the x, y, and z directions, essentially allowing ball rotation to be modeled. The magnitudes of the tangential velocities were derived by decomposing the cross-sectional angular velocity of the ellipsoid into its tangential components, shown below. Using a normal aspect ratio ellipsoid, the effects of introducing ball rotation on lift and drag coefficient were considered.
  
![](/assets/img/cfd10.png)

Thus, the tangential components of velocity for the sliding wall condition were u_w = 〈0,-ωz,ωy〉, where ω=62.81 rad/s as defined in the parameterized variable omega.

### Aspect Ratio

Typical American footballs are roughly ellipsoid in shape and have a short diameter of D_1 = D_2 = ellipsoid_short = 0.17 m and a long diameter of D_3 = ellipsoid_long = 0.28 m. To vary the shape of the ball, the following aspect ratios were considered, shown below. The lift and drag coefficients were evaluated for each aspect ratio to compare the effects of varying ball shape on the aerodynamics of the ball. Qualitative plots to assess velocity and pressure gradients were also generated for each condition.

|  **Name** | **Aspect Ratio** |  **Dimensions** |
|:---------:|:----------------:|:---------------:|
|   Blunt   |       1.17       | 0.17 m x 0.20 m |
|   Normal  |       1.65       | 0.17 m x 0.28 m |
| Elongated |       2.11       | 0.17 m x 0.36 m |

![](/assets/img/cfd2.png)

### Lift and Drag Coefficients

After simulating the time-dependent study, two Surface Integrations were used to calculate the normalized force components in the x- and z-directions, C_x and C_z. Since the angle of attack for this model was set to 0°, these force components were already in the streamwise (parallel to flow) and transverse (perpendicular to flow) directions, meaning these were equivalent to the drag (C_D) and lift (C_L) coefficients respectively. Within the surface integration, the expressions “spf.T_stressz*2/U^2/spf.rho/(surfacearea/2)” and “-spf.T_stressx*2/U^2/spf.rho/(surfacearea /2)” were used to evaluate the lift and drag coefficients respectively. The characteristic area was set as half of the overall surface area of the ellipsoid for both lift and drag.

### Mesh

For each simulation condition, a physics-controlled mesh was generated for the geometry. A Coarse mesh resolution was used to optimize the quality of results with time required to run each simulation. Due to the relatively simple nature of the geometry, no manual mesh refinement was performed. The blunt ellipsoid mesh contained 6925 mesh vertices and 34513 total elements, with 33013 tetrahedra, 1500 prisms, 2604 triangles, 208 edge elements, and 14 vertex elements. The normal ellipsoid mesh contained 7357 mesh vertices as well as 26493 total elements comprised of 34733 tetrahedra, 1760 prisms, 2656 triangles, 216 edge elements, and 14 vertex elements. Finally, the elongated ellipsoid mesh had 8568 mesh vertices with 41979 total elements that included 39419 tetrahedra, 2560 prisms, 2816 triangles, 232 edge elements, and 14 vertex elements.

![](/assets/img/cfd3.png)

## Results

|                  | **Blunt** | **Normal** | **Elongated** |
|:----------------:|:---------:|:----------:|:-------------:|
| Drag Coefficient |   0.4923  |   0.2677   |     0.1557    |
| Lift Coefficient |   0.0005  |   0.0041   |     0.0016    |

![](/assets/img/cfd4.png)
![](/assets/img/cfd5.png)
![](/assets/img/cfd6.png)

|                  | **No Rotation** | **Rotation** |
|:----------------:|:---------------:|:------------:|
| Drag Coefficient |      0.2677     |    0.2692    |
| Lift Coefficient |      0.0041     |    0.0039    |

![](/assets/img/cfd7.png)
![](/assets/img/cfd8.png)

## Conclusions

Understanding how parameters such as football aspect ratio and spin affect the flight of a ball is an important area for manufacturers and football players that can provide a huge boost in learning how to achieve desirable results on the field. Using a simplified model of an ellipsoidal body in 3D, an aerodynamic turbulent flow study was conducted on these parameters to determine the effects they have on lift and drag. It was found that increasing the ball’s aspect ratio leads to decreased drag and increased lift due to the body being more streamlined causing decreased formation of vortices and turbulent flow. The velocity and pressure distributions around the football were as expected, with high pressure/low velocity at the stagnation point and rear of the ball and low pressure/high velocity on the sides of the ball. Increasing the aspect ratio was also found to slightly increase the overall flow velocity and decrease the pressure on the football due to the more streamlined body. The introduction of ball rotation led to slightly worse aerodynamic performance with increased drag and decreased lift; however, ball spin is still desirable due to the increased stability it provides to the flight of the ball.
