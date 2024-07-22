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

##### Session 6.1

photo here!

---

<!-- paginate: true -->

## Session 6.1

- **Critique** Review Prototypes, User Testing
- **Workshop** LED Animation

---

## LED Animation

Hookup Pattern

![bg right width:550](./imgs/ArduinoIDE/pwm_simple.jpg)

---

### LED Animation (Fade Lab)

![bg right width:550](./imgs/ArduinoIDE/pwm_simple.jpg)

Get into groups of two and study this code. Take the next half an hour to produce some alternate versions of this:
* led brightness fades in from 0% to 100% brightness and then blinks rhythmically three times
* led brightness fades out from 100% to 0% brightness, cued by a button press