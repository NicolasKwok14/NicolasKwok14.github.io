---
title: "Syringe Pump"
excerpt: "Programmable syringe pump with precise, controlled fluid delivery using stepper-driven linear actuation."
header:
  image: /assets/img/syringe.png
  teaser: /assets/img/syringe.png
gallery:
  - url: /assets/img/syringe.png
    image_path: assets/img/syringe.png
    alt: "Syringe pump full assembly"
  - url: /assets/img/syringe2.png
    image_path: assets/img/syringe2.png
    alt: "Syringe pump housing and electronics"
  - url: /assets/img/syringe3.png
    image_path: assets/img/syringe3.png
    alt: "Syringe pump carriage and lead screw mechanism"
---
Syringe pumps are widely used in medical and laboratory settings where precise and consistent fluid delivery is essential. For this project, my team and I designed and built a fully functional syringe pump from the ground up. Our goal was to create a compact system capable of accommodating both 10 mL and 20 mL syringes while delivering fluid at a programmable flow rate. Using a stepper motor and lead screw mechanism, custom 3D-printed components, and Arduino-based controls, we developed a working prototype that translates a desired flow rate into precise linear movement of the syringe plunger.

# Features
* **Programmable Flow Rate.** An Arduino-controlled NEMA 17 stepper motor drives a lead screw to convert a desired flow rate in mL/min into precise linear movement of the syringe plunger.
* **10 mL & 20 mL Syringe Compatibility.** Custom-designed supports and a flexible plunger carriage allow the pump to accommodate both 10 mL and 20 mL syringes while maintaining proper alignment during operation.
* **Precision Microstepping: 0.0025 mm/step.** An A4988 motor driver operating at 1/4 microstepping provides 800 steps per revolution. Combined with a 2 mm lead screw, this allows the carriage to move just 0.0025 mm per step for smooth and controlled fluid delivery.
* **Integrated Safety & User Feedback.** A limit switch automatically stops the motor when the syringe reaches the end of its travel, while an RGB LED provides visual feedback for the pump's operating state. All electronics are housed inside a custom 3D-printed enclosure for protection from user contact and potential fluid exposure.

# Off-the-Shelf Parts

| Component | Description | Quantity |
|---|---|---|
| NEMA 17 Stepper Motor | Drives the lead screw to produce linear carriage motion | 1 |
| A4988 Stepper Motor Driver | Controls stepper motor via microstepping (1/4 step) | 1 |
| Arduino Uno | Runs the control program using the AccelStepper library | 1 |
| Lead Screw + Coupler | Converts motor rotation into linear carriage movement (2 mm/rev) | 1 |
| Linear Rod + Bearing | Guides carriage motion along the length of the pump | 1 |
| Limit/End Switch | Detects carriage end position and stops the motor | 1 |
| Push Button | Starts and pauses pump operation | 1 |
| RGB LED | Indicates pump status (red/green/yellow) | 1 |
| Power Supply | Powers the Arduino and stepper driver | 1 |
| 10 mL / 20 mL Syringes | Fluid reservoirs compatible with the pump | 2 |

# Custom 3D-Printed Parts

| Component | Material | Purpose |
|---|---|---|
| Housing Body | PLA | Encloses and protects the Arduino, driver, and wiring from user contact and fluid exposure |
| Housing Lid | PLA | Seals the top of the housing while keeping openings limited to the sides |
| Syringe Body Support | PLA | Secures the syringe flange in place so it stays stationary during operation |
| Syringe Carriage | PLA | Clamps the plunger and translates lead screw motion into plunger movement |
| Syringe Flange Holder | PLA | Redesigned support that holds the syringe barrel securely in place |
| Linear Rod Holder | PLA | Mounts and aligns the linear guide rod |
| Motor Mounting Plate | PLA | Secures the NEMA 17 stepper motor in a fixed, aligned position |

# Operating Instructions
1. **Load the Syringe.** Select either the 10 mL or 20 mL syringe and place it securely within the carriage and support pieces.
2. **Position the Carriage.** Manually turn the coupler or rod so the syringe sits tightly between the carriage and support.
3. **Connect Power.** Plug in the power cord and confirm the LED is yellow, indicating the system is powered and on standby.
4. **Start the Pump.** Press the button on the housing. The LED turns green and the motor begins dispensing fluid.
5. **End of Pumping.** Once the carriage triggers the limit switch, the syringe is empty and the LED turns red.
6. **Retract the Carriage.** Unplug the power supply, then turn the coupler or rod counterclockwise to return the carriage to its starting position.
7. **Load a New Syringe.** With the carriage reset, repeat the process for the next syringe.

# Arduino Code
The full control program, written using the AccelStepper library, is available here:

[View Arduino Code](/assets/img/syringe-pump-code.ino){: .btn .btn--primary}

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028115500f7fe22fff431?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="Above is a few images to go along with the project" %}
