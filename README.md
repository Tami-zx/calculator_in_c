# 🧮 `calculator_in_c`

This repository contains a simple **terminal calculator** application, developed in **C** with the goal of **training and improving my skills** in the language.

The project is divided into two versions that illustrate my learning curve:

1.  **Version 1 (Inefficient):** A quick and simple approach, written without considering scope or scalability.
2.  **Version 2 (Improved):** An attempt, even with my limited skills, to create a more **efficient** and **maintainable** solution.

---

## 🎯 Project Goal

The main focus is to **showcase my evolution** and serve as my **first C application** of many more to come.

Furthermore, the project aims to teach me in practice how:

* **Pointers** work and how they can be used within **structs**.
* **Modularization** (dividing responsibilities into functions) leads to cleaner code.

---

## 🏗️ Code Structure and Evolution

### 💾 Version 1: The Inefficient One (The "How Not To Do It")

This version was created using a **simplistic mold focused on finishing fast**. It is marked by design decisions that make the code difficult to maintain:

* **Unnecessary repetition** of code (violating the DRY principle - Don't Repeat Yourself).
* Use of **multiple sequential `if` statements** where a `switch` would be more appropriate.
* Decisions that hinder readability and scalability (such as poor variable scope management).

This is a type of code I used often during prototyping, where optimization sometimes takes a backseat or is nonexistent.

---

### ✨ Version 2: The Optimization Attempt

In this version, the code was rewritten focusing on **structure and maintainability**:

* **Modularization:** Use of functions (`void`s) to isolate responsibilities (asking for numbers, performing the calculation).
* **Structs and Pointers:** Use of a `struct` to group the number pointers (`*pn1`, `*pn2`), simplifying the passing of arguments between functions.
* **Decisions:** I tried using pointers, but I can see it ended up being a bit confusing. Some decisions, looking back, I believe were poorly made. **However**, the project manages to be far more **maintainable** than the first one, and it can **scale up** to a more complete calculator, which would have been an unmeasurable headache in the first project.

---


## 🤝 Contributions and Feedback

This is an **open** project for changes, improvements, and anything else!

I would genuinely love to receive **refactored versions** or **suggestions** so that I can study and understand the perspective of other developers, whether they are beginners or experienced. The goal is to learn!

Feel free to open **Issues** or send a **Pull Request**.

*Just don't judge me too harshly!
