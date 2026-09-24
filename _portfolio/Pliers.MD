---
title: "3D-Printed Needle-Nose Pliers"
excerpt: "A three-part needle-nose plier design featuring a snap-fit pivot and flexible TPU spring, assembled entirely by hand without screws, glue, or tools."
header:
  teaser: /assets/img/pliers3.jpeg
gallery:
  - image_path: /assets/img/pliers1.jpeg
  - image_path: /assets/img/pliers2.jpeg
  - image_path: /assets/img/pliersgif.gif
---

## Overview

I was given a task of fabricating a pair of needle-nose pliers, specifically with the capability of picking up something small (a standard through-hole resistor). However, with the task came specifications and a catch: **no screws, glue, or tools of any kind for assembly**. Just a pair of pliers with a maximum of three printed parts, pressed together by hand, that automatically springs back to an open position when not in use.

One would think that the reduction of components would make the design process easier. After all, fewer components should mean less work; however, this was proven to not necessarily be the case.

This page walks through what "print-in-place" means, the design and iteration process behind the pivot and spring mechanism, the final specs, and a gallery of the prints along the way.

## What Is Print-in-Place?

To understand exactly the task given at hand, we must first understand what the term **"print-in-place"** means.

A print-in-place design exactly matches its name. It's a model that comes off the printer assembled and functional, with no requirement for post-processing or assembly steps in between. Rather than printing rigid parts and bolting or gluing them together afterward, the design is created with tiny clearances built into the joints that allow the parts to move without requiring external tools.

In fact, print-in-place is not something niche and has several real-life applications:

- **Prosthetics:** Researchers used FDM 3D printing to combine multiple rigid PLA finger segments with TPU joints in low-cost prosthetic hands ([University of Houston research](https://uh-ir.tdl.org/items/e88755a3-1edd-4941-945d-fe94c6cd512c)). Similar uses of PLA and TPU have also been explored for veterinary prosthetics, where the soft material contacts the animal's limb and the rigid material carries the structural load ([Politecnico di Milano thesis](https://www.politesi.polimi.it/handle/10589/152742)).

- **Robotics and grippers:** Similar to prosthetics, robotic joint designs print rigid materials like PLA or polycarbonate alongside flexible TPU in the same structure specifically to eliminate assembly steps ([US Patent 11,780,100](https://image-ppubs.uspto.gov/dirsearch-public/print/downloadPdf/11780100)).

- **Consumer and hobbyist prints:** The design community has adopted print-in-place for fun. Examples include dragons, lizards, and action figures with working joints, printed as a single file with zero assembly ([SelfCAD's roundup of print-in-place models](https://www.selfcad.com/blog/print-in-place-3d-models-10-best-options); [Make: Magazine on the technique](https://makezine.com/article/digital-fabrication/3d-printing-workshop/print-in-place-the-additive-holy-grail/)).

So, what combination of materials actually works well?

In general, it appears to be a rigid polymer plus elastomer pairing, most commonly **PLA paired with TPU**. The rigid material handles load and maintains geometry, while the elastomer, most commonly TPU, is reserved specifically for constant bending without fatiguing or fracturing.

That's exactly the combination this project uses: **rigid handles (PLA) and one flexible spring element (TPU 95A).**

## Design & Iterative Process

The mechanism at hand borrows the core idea of print-in-place without being print-in-place in the strict sense. A true print-in-place version of this project would need a single print job to lay down the PLA and TPU sections together, capturing the zero-assembly aspect of print-in-place.

Since that requires a specialized multi-material printer and is currently out of my scope, I built a **3-part hand-pressed assembly** containing two rigid handle halves and one TPU spring element, with no additional parts being used.

### The Pivot

The two handles rotate on a single printed pivot: a boss on one handle pressed into a bore on the other. The boss is also capped with a small overhanging lip that snaps past the bore's edge during assembly, which keeps the pieces interlocked.

Getting this right took a few iterations of testing. Conceptually, too little clearance between the boss and bore meant the pivot wouldn't spin freely; however, too much clearance would make the pivot too loose.

I started with a boss diameter of **5 mm**, a bore diameter of **5.3 mm**, and a boss head diameter of **7 mm** with a **1 mm chamfer**. The boss and bore diameters stayed constant through every iteration, but the boss head required adjustment.

The first test print made it immediately clear that 7 mm was too large for the head. I brought it down step by step:

- 7 mm
- 6 mm
- 5.75 mm
- **5.4 mm**

At **5.4 mm**, the mechanism worked as intended. It spun freely on its axis without coming apart and without excessive friction.

![Pivot mechanism during testing](/assets/img/test1.jpeg)

### The Handle and Jaw Tips

When I was designing my first iteration of the pliers, I made a key mistake by not starting the model from a closed position. The first iteration consisted of the model in an open position, which resulted in the jaws not meeting when the handles were closed.

The fix was to update the drawing by starting from a **closed position** and then mirroring the drawing on the face of the jaw to determine where the pivot should be. I also included a **0.5 mm offset** from the clamping face for clearance.

The handles were scaled to match the proportions of real pliers, keeping the overall tool from feeling either oversized or flimsy in the hand. Fillets were added along the grip to make it more comfortable to hold, and a roughly **25 mm clearance zone** around the pivot gives the two handles enough room to swing through their full range of motion without interfering with each other.

![Handle and spring hole testing](/assets/img/handles1.jpeg)

### The Spring

The flexible element is a cylindrical rod of **95A TPU**, press-fit into holes at the back of each handle. Because the fit relies on friction rather than adhesive, the rod was initially sized with a diameter slightly greater than that of the holes: **4.3 mm for the rod and 4 mm for the holes**.

A small vent hole with a diameter of **1 mm** at the base is also present. This lets trapped air escape during assembly instead of pushing back against the rod.

The spring's resting shape holds the handles apart, which holds the jaws open. Squeezing the handles bends the rod into a curve, storing elastic energy. Releasing the handles lets the rod straighten back out and reopen the jaws automatically.

The rod diameter was tested at:

- 4.3 mm
- 4.0 mm
- **3.9 mm**

The **3.9 mm diameter** ended up fitting best.

One challenge with press-fitting a print this small was getting the rod's diameter to come out uniform along its full length. Slight variation meant some ends went in easily while others fit much tighter.

I tested printing the rod both on its side and standing on its base. Printing sideways left the rod ends slightly out-of-round, while printing on its base produced a rounder cross-section but a less consistent diameter along the length.

The rod length was tested at **95 mm** and worked well. A longer rod widens the jaw's opening gap, while a shorter one narrows it.

![Rod prints with different diameters and orientation](/assets/img/rods1.jpeg)
![Rod diameters](/assets/img/rods2.jpeg)

## Specifications

| Spec | Value |
| --- | --- |
| Jaw length (pivot to tip) | 67 mm |
| Jaw capacity (max opening) | ___ mm |
| Handle length | 97 mm |
| Handle thickness | 11 mm |
| TPU spring rod diameter | 3.9 mm |
| TPU rod length | 95 mm |
| TPU hole diameter | 4 mm |
| TPU hole depth | 9 mm |
| Pivot pin diameter / bore clearance | 5.0 mm / +0.3 mm |
| Boss head diameter | 5.4 mm |
| Number of parts | 3 (2 rigid handles + 1 TPU spring) |

## Print Settings

| Setting | Rigid Handles | TPU Spring |
| --- | --- | --- |
| Material | PLA | 95A TPU |
| Layer height | 0.3 mm | 0.2 mm |
| Infill | 15% Gyroid pattern | 25% Gyroid pattern |
| Print speed | 80 mm/s | 45 mm/s |
| Nozzle temperature | 215 °C | 230 °C |
| Bed temperature | 65 °C | 60 °C |
| Supports | On | On |

## Fusion Model

<!-- INSERT FUSION 360 EMBED HERE -->

## Picture Gallery

{% include gallery caption="3D-Printed Needle-Nose Pliers Gallery" %}
