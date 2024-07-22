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

##### Session 2.2

photo here!

---

<!-- paginate: true -->

## Session 2.2

- **Lecture / Workshop** A Tour of Arduino
- **Workshop** Blink
- **Workshop** Digital Input
- **Assignment** More Light Switch Circuits; Review Blink and Digital Input

---

## A Tour of Arduino
### IDE

![bg right width:600](./imgs/ArduinoIDE/arduinoIDE.jpg)

* `{}`: denotes a function
* `void setup()`: a function that runs first and once
* `void loop()`: a function that runs after `void setup()` forever

---

## Blink
### Internal LED

* `pinMode()`: declares a particular pin number an `INPUT` or `OUTPUT`
* `delay()`: halt progression of the program, a brute-force way to add a pause our code
* `digitalWrite()`: outputs a digital signal (`HIGH` or `LOW`) to an onboard LED

---

### Blink: Internal LED

Experiment by changing `delay()` times.

---

### Blink: External LED

Hookup pattern (1)

![width:1100px](./imgs/electronics/blinkExternalLED1_bb.jpg)

---

### Blink: External LED

Hookup pattern (2)

![width:1100px](./imgs/electronics/blinkExternalLED2_bb.jpg)

---

## Digital Input
### Button (Internal LED)

Hookup Pattern

![width:1100px](./imgs/electronics/buttonInternalLED_bb.jpg)

---

### Button (Internal LED)

![bg right width:600](./imgs/ArduinoIDE/button-print.jpg)

* `const int`: `buttonPin` is of type `int` and will not change
* `Serial.begin(9600)`: initializes Serial communication
* `digitalRead(buttonPin)` read / store state of pushbutton
* What does the `if` statement do currently?

---

### Button (External LED)

Hookup Pattern

![width:1100px](./imgs/electronics/buttonExternalLED_bb.jpg)

---

### Button (External LED)

![bg right width:600](./imgs/ArduinoIDE/button-print.jpg)

* `digitalWrite`: set `ledPin` `HIGH` or `LOW`

---

## Assignments
### More Light Switch Circuits

Be prepared to wire up working versions of the following LED Circuits:

1) 1x Switch 1x LED
3) 2x Switches 2x LEDs

---

## Assignments
### Review: Blink, Button examples

Be prepared to quickly wire up any of the Arduino examples we covered today.