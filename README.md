# 🔐 Password-Protected Circuit Breaker (Arduino)

An embedded security-based switching system that controls an electrical load (light/appliance) using a keypad-authenticated password mechanism. The system ensures that only authorized users can toggle the relay, making it a basic but effective access control prototype.

---

## 🚀 Demo Video

Watch the project in action:
[Demo_video](https://youtu.be/IIBB9jGDu5U)

---

## 🧠 Project Overview

This system uses a **4x4 matrix keypad** to accept user input.

* The user enters a password
* Presses `#` to submit
* If correct → relay toggles (ON/OFF)
* If wrong → access denied

This simulates a **mini circuit breaker with authentication**, useful for controlled power systems.

---

## ⚙️ Features

* Password-based authentication system
* Relay-controlled load switching
* Toggle functionality (ON ↔ OFF)
* Input control:

  * `*` → Clear input
  * `#` → Submit password
* Serial monitor debugging

---

## 🛠️ Components Required

* Arduino Uno / Nano
* 4x4 Matrix Keypad
* 5V Relay Module
* Light / Electrical Load
* Jumper Wires
* Breadboard (optional)

---

## 🔌 Pin Configuration

| Component    | Arduino Pin |
| ------------ | ----------- |
| Keypad Row 1 | 9           |
| Keypad Row 2 | 8           |
| Keypad Row 3 | 7           |
| Keypad Row 4 | 6           |
| Keypad Col 1 | 5           |
| Keypad Col 2 | 4           |
| Keypad Col 3 | 3           |
| Keypad Col 4 | 2           |
| Relay IN     | 10          |

---

## 🧪 How It Works

1. System waits for keypad input
2. User enters password
3. Press `#` to validate
4. If password matches:

   * Relay state toggles
   * Load turns ON/OFF
5. If incorrect:

   * Access denied
   * System resets input

---

## 🔒 Security Limitations

This is **NOT a secure system**. It is for learning purposes.

* Password is hardcoded in code
* No encryption
* No brute-force protection
* No attempt limit

---

## 📈 Future Improvements

* LCD display for user interface
* Buzzer for alerts
* EEPROM-based password storage
* Failed attempt lockout system
* RFID / Fingerprint authentication upgrade
* IoT control (mobile/web dashboard)

---

## 🎯 Applications

* Smart home switching systems
* Restricted power access
* Educational embedded systems
* Prototype security systems

---

## ⚠️ Important Note

If you want this project to stand out:

* Add circuit diagrams
* Add real-world use case explanation
* Add images of setup
* Improve security logic

Otherwise, it's just another beginner Arduino project.
