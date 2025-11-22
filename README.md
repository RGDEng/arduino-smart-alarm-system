# Smart Safe Alarm System 🚨

## Engineering Concept
Unlike basic Arduino sketches that use `delay()` (blocking the processor), this project implements **asynchronous timing** using `millis()`. This allows the system to listen for user input (Emergency Stop) *while* the alarm sequence is active.

## Features
- **State Machine Logic:** Uses boolean flags to manage system states (Armed/Triggered/Idle).
- **Non-Blocking Timer:** Custom implementation of a 10-second timer that doesn't freeze the CPU.
- **Emergency Override:** Immediate interrupt capability via user button.

## Hardware
* **Input:** Push button with 10kΩ Pull-Down configuration.
* **Output:** LED with current limiting resistors.
* **Logic:** Arduino UNO R3.

---
*Engineered by [RGD]*
