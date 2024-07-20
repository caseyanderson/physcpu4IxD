---
marp: true
theme: gaia
class:
    - invert
footer: "[CTA](https://www.caseyanderson.com) / [AWP](https://www.awavepress.com)"
style: |
  .columns {
    display: grid;
    grid-template-columns: repeat(2, minmax(0, 1fr));
    gap: 1rem;
  }
  .columns3 {
    display: grid;
    grid-template-columns: repeat(3, minmax(0, 1fr));
    gap: 1rem;
  } 
  img[alt~="center"] {
    display: block;
    margin: 0 auto;
  }
---

# Physical Computing for Interaction
#### Casey Anderson, 2024

##### Session 4.2

photo here!

---

<!-- paginate: true -->

## Session 4.2

- **Workshop** Counting Button Presses
- **Lecture** Introduction to Analog Sesnsors / Voltage Dividers
- **Assignment**

---

## Counting Button Presses

Hookup Pattern

![width:1100px](./imgs/electronics/buttonExternalLED_bb.jpg)

---
### Counting Button Presses

![bg right width:600](./imgs/ArduinoIDE/button-print.jpg)

Let's quickly review our simplest model for using a button press to change the state of an `LED`.

Here we turn the LED on if the button is pressed. Do you think this structure can be used to count presses?

---

### Counting Button Presses

![bg right width:550](./imgs/ArduinoIDE/counting-button-presses.jpg)

Here we block repeat triggers by checking for a `State Change` rather than simply whether or not 