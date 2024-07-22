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

![bg right width:550](./imgs/ArduinoIDE/button-print.jpg)

Let's quickly review our simplest model for using a button press to change the state of an `LED`.

Here we turn the LED on if the button is pressed. Do you think this structure can be used to count presses?

---

### Counting Button Presses

![bg right width:550](./imgs/ArduinoIDE/button-counter-no-block.jpg)

Here is one way to try to count button presses using the previous model. Do you see any issues with this? Is it possible to reliably count button presses this way?

---

### Counting Button Presses

![bg right width:550](./imgs/ArduinoIDE/counting-button-presses.jpg)

Here we use a totally different approach to count button presses: counting, instead, the change in State (going from `LOW` to `HIGH`), eliminating the repeat triggers.

---

### Counting Button Presses

How else could we make use of this structure? Get into groups of two and mock up a 1x button (input) 5x LED (output) prototype that makes use of a modified version of this code. We will compare our results at the end of the hour.

---

## Analog Sesnors / Voltage Dividers
### Electrical Signals

In electronics a signal is a time-varying quantity which conveys information. The quantity that is varying over time is typically voltage or current. Physical Computing involves interfacing two types of electrical signals: digital and analog.

---

### Digital Signals

![bg right width:550](./imgs/electronics/digital_sig.png)

A digital signal is comprised of a sequence of discrete values. We typically think of these values as binary, or sequences of 1 and 0, and associate them with computers.

---

### Digital Signals

To date we have exclusively worked with digital inputs and outputs: a button (input) is either connected (on) or disconnected (off); an LED (output) is either illuminated (on) or dark (off).

---

### Analog Signals
![bg right width:550](./imgs/electronics/analog_sig.png)

An analog signal is a signal varying value at any point within a given range. Generally people refer to phenomena in the "real world" as analog: light level, temperature, weight, etc.

Analog Capable Arduino pins begin with the letter `A`.

---

### Potentiometer

![bg right width:550](./imgs/electronics/Potentiometer-1.png)

A potentiometer, sometimes called a knob or variable resistor, is a three pin component. Its resistance is dictated by the position of the knob between its minimum and maximum values.

---
### Potentiometer

![bg right width:550](./imgs/electronics/inside-potentiometer.png)

One can imagine the three pins as facial features: two ears (pins 1 and 3) and a nose (pin 2). The sensor value, or position of the knob with respect to its full rotation, can be found on pin 2. Pins 1 and 3 need to be connected to `Voltage` and `Ground` respectively.

---
### Potentiometer

![bg right width:550](./imgs/electronics/led-potentiometer-circuit.png)

Get into groups of two and wire up this example, using your Arduino's `3.3V` and `Gnd` pins to act as a battery

---

### analog read

Hookup Pattern

![bg right width:600](./imgs/electronics/analogSensor_bb.jpg)

Wire up a potentiometer to `A0` on your Arduino as shown here.

---

### analog read

![bg right width:600](./imgs/ArduinoIDE/analog-read.jpg)

In groups, take some time to investigate the following:
* what is the lowest number you can get out of your potentiometer?
* what is the highest number?
* what happens if you move your potentiometer knob and let it stay in one position?

---

### Voltage Dividers

![bg right width:600](./imgs/electronics/voltagedivider.png)

A voltage divider is a circuit that produces an output that is smaller than its input (where the output is voltage or current).

---

### Light Dependent Resistor

![bg right width:600](./imgs/electronics/ldrSensor_bb.jpg)

Wire up a light sensor as shown to the right and try running the analog read example again. How does this compare to the potentiometer?

---

### Light Dependent Resistor

In groups, take some time to investigate the following:
* what is the lowest number you can get out of your light sensor?
* what is the highest number?
* what happens if you simply leave your light sensor alone?

---

## Assignments

* 2x Input 2x Output Prototype v1
* Draft Prototype Proposal v1
* 10/5/1 Ideas doc v1