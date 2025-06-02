# 🕒 Time Class – C++ Implementation

## 📌 Overview

This project implements a simple **Time Abstract Data Type (ADT)** using a C++ `class`.
The class models a time object that stores **hour**, **minute**, and **second**, and provides functionality to:

* Set the time in 24-hour format.
* Print the time in **universal format (HH\:MM\:SS)**.
* Print the time in **standard format (HH\:MM\:SS AM/PM)**.
* Automatically validate and correct invalid time inputs.



## 🧱 Class Structure

### 🔓 Public Members

* `Time()`
  → Default constructor that initializes time to `00:00:00`.

* `void setTime(int hour, int minute, int second)`
  → Sets the time with validation (values outside valid ranges are reset to 0).

* `void printUniversal()`
  → Displays the time in 24-hour format (e.g., `13:45:08`).

* `void printStandard()`
  → Displays the time in 12-hour format with AM/PM (e.g., `1:45:08 PM`).

### 🔒 Private Members

* `int hour`   → Must be in range \[0, 23]
* `int minute` → Must be in range \[0, 59]
* `int second` → Must be in range \[0, 59]



## 🧪 Sample Output

```cpp
Time t;

t.printUniversal();   // 00:00:00
t.printStandard();    // 12:00:00 AM

t.setTime(13, 27, 6);
t.printUniversal();   // 13:27:06
t.printStandard();    // 1:27:06 PM

t.setTime(99, 99, 99); // invalid input
t.printUniversal();   // 00:00:00
t.printStandard();    // 12:00:00 AM
```



## 🎯 Learning Goals

* Practice defining and using C++ classes.
* Understand **constructors**, **access specifiers**, and **member functions**.
* Learn about **data validation** inside classes.
* Gain experience using **formatted output** (`setw`, `setfill`).



## 📚 Technologies

* Language: C++
* IDE: Any (Visual Studio, Code::Blocks, etc.)
* C++ Standard: C++11 or later



## 👨‍💻 Author

This project was created by **عبدالله** as part of learning object-oriented programming in C++.
The goal is to understand and apply the concepts of class design through practical mini-projects.
