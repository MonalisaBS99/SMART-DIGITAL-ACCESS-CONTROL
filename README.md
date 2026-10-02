
🔐 Smart Digital Access Control System

A small Arduino project I’m building to learn how hardware and software work together.

I started this project in Tinkercad by first testing the keypad and LCD separately, and then combining them into a simple digital access-control system.

The goal is to keep improving it step by step and eventually make the digital PIN system control a physical locking mechanism.

🛠️ Components

- Arduino Uno
- 4×4 Keypad
- 16×2 LCD
- 10K Potentiometer
- Servo motor (planned upgrade)

⚙️ Current Features

- PIN-based access
- 4×4 keypad input
- 16×2 LCD display
- PIN masking using "*"
- "*" to clear the entered PIN
- "#" to submit the PIN
- Access granted / denied messages

🔄 How It Works

Enter PIN
    ↓
Keypad sends input
    ↓
Arduino checks the PIN
    ↓
      ┌───────────────┐
      ↓               ↓
 Correct           Incorrect
      ↓               ↓
Access Granted   Access Denied

💻 Code

The Arduino source code is available here:

"Smart_Digital_Access_Control.ino"

I wrote the code by understanding what each part does rather than simply copying a complete program.

🔌 Circuit & Schematic

The circuit connections and schematic are included in this repository.

The project was initially built and tested in Tinkercad so I could experiment with the circuit before working with the physical components.

🎥 Demo

A working demonstration will be added as I continue upgrading the project.

🚀 Planned Improvements

- Add a servo-based physical locking mechanism
- Add a limited number of attempts
- Temporary system lock after multiple incorrect PINs
- Add password-change functionality
- Add more useful system features
- Eventually explore how this idea could be extended towards an IoT-based system

🌱 What I’m Learning

Through this project, I’m learning about:

- Arduino programming with C/C++
- Keypad interfacing
- LCD interfacing
- Digital input and output
- Hardware–software interaction
- Circuit connections
- Debugging
- Writing code by understanding each line
- Building and testing ideas through simulation

📌 Project Status

Work in progress 🚧

I’m building this step by step, learning from each stage and improving it as I understand more.

Learning → Building → Debugging → Understanding → Improving
