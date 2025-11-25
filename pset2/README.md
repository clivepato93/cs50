# CS50 Week 2 – Arrays

## 📘 Overview
Week 2 of Harvard’s CS50 focuses on **Arrays**, **Strings**, and **Algorithms**.  
We transition from using simple variables to managing collections of data, learn how memory works in C, and implement simple sorting and searching algorithms.

---

## 🧠 Topics Covered
- **Arrays**: Declaring, accessing, and iterating through collections of values.
- **Strings**: Representing text as arrays of characters.
- **Command-Line Arguments** (`argc`, `argv`).
- **Character Encoding**: ASCII and case manipulation.
- **Algorithms**:
  - Linear Search
  - Binary Search
  - Bubble Sort
  - Selection Sort
  - Insertion Sort
- **Algorithmic Complexity** (`O(n)`, `O(log n)`, `O(n^2)`).

---

## 💻 Problem Sets

### 🧩 1. Scrabble
**Goal:** Write a program that determines which of two players’ words is worth more in Scrabble.  
**Concepts Used:** Arrays, loops, ASCII values.

**Example:**
```bash
$ ./scrabble
Player 1: HELLO
Player 2: WORLD
Player 2 wins!
```

---

### 🧮 2. Readability
**Goal:** Implement a program that computes the Coleman-Liau index of text to estimate the U.S. grade level required to comprehend it.  
**Concepts Used:** Loops, conditionals, string manipulation, arithmetic.

**Example:**
```bash
$ ./readability
Text: Congratulations! Today is your day.
Grade 3
```

---

### 🔢 3. Caesar
**Goal:** Implement a Caesar cipher — a simple encryption technique that shifts letters by a fixed key.  
**Concepts Used:** Command-line arguments, ASCII arithmetic, modular arithmetic.

**Example:**
```bash
$ ./caesar 13
plaintext:  HELLO
ciphertext: URYYB
```

---

## 🧩 Optional Practice Problems
- **Substitution** – More complex cipher using a key map.
- **Wordle50** – Build a text-based version of Wordle.

---

## 🧪 Key Takeaways
- Strings are just arrays of characters terminated by `\0`.
- ASCII values make it possible to manipulate character cases.
- Searching and sorting algorithms differ drastically in efficiency.
- Understanding runtime complexity helps you write faster programs.

---

## 🛠️ Commands & Compilation Tips
```bash
make program_name     # Compiles your C program
./program_name        # Runs your program
check50 cs50/problems/2024/x/scrabble   # Checks correctness
style50 program_name.c                  # Checks code style
```

---

## 📚 References
- [CS50 Lecture 2: Arrays](https://cs50.harvard.edu/x/2025/weeks/2/)
- [CS50 Shorts: Searching](https://www.youtube.com/watch?v=5XnJvHfzmZ0)
- [CS50 Shorts: Sorting](https://www.youtube.com/watch?v=ZZuD6iUe3Pc)

---

## 🧑‍💻 Author
**Name:** [Your Name]  
**Course:** CS50x 2025  
**Week:** 2 – Arrays
