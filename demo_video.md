# 🎥 Demo Video – Password-Protected Circuit Breaker

## 🔗 Watch the Demo

https://youtu.be/IIBB9jGDu5U

---

## 🧠 What This Demo Shows

This video demonstrates the working of a **password-protected relay control system** using an Arduino and a 4x4 keypad.

The system allows a user to control an electrical load (light) only after entering the correct password.

---

## ⚙️ Demonstration Breakdown

### 1. System Idle State

* The system is powered ON
* Relay is initially OFF
* Waiting for user input

---

### 2. Password Entry

* User enters a sequence using the keypad
* Each keypress is captured by the system

---

### 3. Password Submission

* User presses `#` to submit the entered password

---

### 4. Correct Password Scenario

* If the password matches:

  * Access is granted
  * Relay toggles state
  * Light turns ON or OFF

---

### 5. Incorrect Password Scenario

* If the password is wrong:

  * Access is denied
  * No change in relay state
  * System resets input

---

### 6. Input Controls

* `*` → Clears the entered password
* `#` → Submits the password

---

## 🔄 System Behavior Observed

* Reliable keypad input detection
* Instant relay response after authentication
* Toggle functionality working correctly

---

## 🎯 Purpose of the Demo

This demo validates:

* Functional correctness of the system
* Real-time interaction between hardware and code
* Basic security logic implementation

---

## ⚠️ Limitations Visible in Demo

* No display feedback (LCD not included)
* No buzzer or alert system
* No restriction on multiple wrong attempts

---

## 📌 Conclusion

The demo confirms that the system successfully implements a **basic password-based access control mechanism** for switching electrical loads using embedded hardware.

This serves as a strong foundation for building more advanced secure systems.
