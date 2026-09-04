---
title: "Syringe Pump"
excerpt: "Programmable syringe pump with precise, controlled fluid delivery using stepper-driven linear actuation."
header:
  image: /assets/img/syringe.png
  teaser: /assets/img/syringe.png
gallery:
  - url: /assets/img/syringe.png
    image_path: assets/img/syringe.png
    alt: "placeholder image 1"
  - url: /assets/img/syringe2.png
    image_path: assets/img/syringe2.png
    alt: "placeholder image 2"
  - url: /assets/img/syringe3.png
    image_path: assets/img/syringe3.png
    alt: "placeholder image 3"
---

Syringe pumps are widely used in medical and laboratory settings where precise and consistent fluid delivery is essential. For this project, my team and I designed and built a fully functional syringe pump from the ground up. Our goal was to create a compact system capable of accommodating both 10 mL and 20 mL syringes while delivering fluid at a programmable flow rate. Using a stepper motor and lead screw mechanism, custom 3D-printed components, and Arduino-based controls, we developed a working prototype that translates a desired flow rate into precise linear movement of the syringe plunger.

# Features

* **Programmable Flow Rate.** An Arduino-controlled NEMA 17 stepper motor drives a lead screw to convert a desired flow rate in mL/min into precise linear movement of the syringe plunger.
* **10 mL & 20 mL Syringe Compatibility.** Custom-designed supports and a flexible plunger carriage allow the pump to accommodate both 10 mL and 20 mL syringes while maintaining proper alignment during operation.
* **Precision Microstepping: 0.0025 mm/step.** An A4988 motor driver operating at 1/4 microstepping provides 800 steps per revolution. Combined with a 2 mm lead screw, this allows the carriage to move just 0.0025 mm per step for smooth and controlled fluid delivery.
* **Integrated Safety & User Feedback.** A limit switch automatically stops the motor when the syringe reaches the end of its travel, while an RGB LED provides visual feedback for the pump's operating state. All electronics are housed inside a custom 3D-printed enclosure for protection from user contact and potential fluid exposure.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028115500f7fe22fff431?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="Above is a few images to go along with the project" %}
