# 🔌 Hardware Connections Guide

This document explains the wiring connections for the Password-Protected Circuit Breaker project.

---

## 🧠 System Overview

The system consists of:

* A keypad for password input
* A relay module to control a load
* Arduino as the controller

---

## 📟 Keypad Connections (4x4)

The keypad has 8 pins:

* 4 Row pins
* 4 Column pins

### Connect as follows:

| Keypad Pin | Arduino Pin |
| ---------- | ----------- |
| Row 1      | 9           |
| Row 2      | 8           |
| Row 3      | 7           |
| Row 4      | 6           |
| Column 1   | 5           |
| Column 2   | 4           |
| Column 3   | 3           |
| Column 4   | 2           |

---

## ⚡ Relay Module Connections

| Relay Pin | Arduino Connection |
| --------- | ------------------ |
| VCC       | 5V                 |
| GND       | GND                |
| IN        | Pin 10             |

---

## 💡 Load (Light) Connection

⚠️ Be careful when handling AC power.

### Relay Terminals:

* COM → Power source
* NO (Normally Open) → Load (light)

### Working:

* Relay OFF → Circuit open → Light OFF
* Relay ON → Circuit closed → Light ON

---

## 🔁 System Behavior

* Enter password using keypad
* Press `#` to submit
* Correct password → relay toggles
* Press `*` → clears input

---

## ⚠️ Safety Warning

* Do NOT touch relay terminals when powered
* Use proper insulation for AC loads
* Test with low voltage before using real appliances

---

## 🔧 Customization

* Change keypad pins in code if needed
* Change relay pin from `10` to any digital pin
* Update password in code:

```
String correctPassword = "1234";
```

---

## 🚨 Common Mistakes

* Wrong keypad wiring → no input
* Relay not switching → check VCC/GND
* Using wrong keypad type (not 4x4)
* Loose jumper connections

---

## 📌 Final Advice

If your wiring is messy, your system will behave like trash.
Clean wiring = stable system.
