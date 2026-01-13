# Alternating Parity Generator

This project implements a stochastic number generator in C that enforces a specific **Parity Pattern**. Instead of purely random numbers, it generates a sequence that alternates strictly between Odd and Even values.

## ⚙️ Algorithm Logic

The generator operates in the range $[1, 100]$ and maintains a state variable (`sira`) to track the required parity for the next number.

1.  **State 1 (Odd Requirement):** The loop generates random numbers until an Odd number ($x \% 2 \neq 0$) is found.
2.  **State 0 (Even Requirement):** Once an Odd number is printed, the state toggles. The loop now searches for an Even number ($x \% 2 == 0$).
3.  **Repetition:** This cycle continues until $N$ numbers are generated.

### Sequence Example
`Input N: 5`
* **1st:** Random Odd $\to$ `23`
* **2nd:** Random Even $\to$ `84`
* **3rd:** Random Odd $\to$ `7`
* **4th:** Random Even $\to$ `12`
* **5th:** Random Odd $\to$ `91`

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o parity_gen
    ```
2.  Run the executable:
    ```bash
    ./parity_gen
    ```
3.  Enter the sequence length ($N$).

---
*This repository demonstrates state machine logic and random sampling validation in C.*
