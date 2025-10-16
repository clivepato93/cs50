# 🧾 CS50x Week 1 — C

## 📘 Overview
This week introduces programming in **C**, focusing on syntax, data types, loops, conditionals, and basic problem-solving.  
There are three exercises: **Hello**, **Mario**, and **Credit**.

---

## 🖐️ 1. Hello

### 📝 Description
The classic first program!  
Prompts the user for their name and prints a personalized greeting.

### 💻 Example
```bash
$ ./hello
What is your name?
Clive
hello, Clive
```

### 💡 Concepts
- Input and output (`get_string`, `printf`)
- Strings and format specifiers (`%s`)
- Basic program structure in C

---

## 🧱 2. Mario

### 📝 Description
Recreates pyramid patterns from *Super Mario Bros.* using `#` characters.  
There are two versions:
- **Less**: Left-aligned half-pyramid
- **More**: Double-sided pyramid

### 💻 Example — Less Version
```bash
$ ./mario
Height: 4
   #
  ##
 ###
####
```

### 💻 Example — More Version
```bash
$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```

### 💡 Concepts
- Nested `for` loops
- Input validation (height between 1–8)
- Conditional printing of spaces and hashes

---

## 💳 3. Credit

### 📝 Description
Validates a credit card number using **Luhn’s Algorithm** and identifies its type.  
Supports **AMEX**, **MASTERCARD**, and **VISA** cards.

### 💻 Example
```bash
$ ./credit
Number: 378282246310005
AMEX
```

If invalid:
```bash
$ ./credit
Number: 123456789
INVALID
```

### 💡 Concepts
- Loops and arithmetic with `long` values
- Modular operations (`%`)
- Conditional branching
- Implementing algorithms step by step

---

## 🧠 Key Takeaways
- Compiling with `make` and executing with `./program`
- Handling user input safely
- Working with loops and conditionals
- Applying algorithms (like checksum validation)
- Building structured, readable programs in C

---

## ⚙️ Running the Programs

Compile each program:
```bash
make programname
```

Run the executable:
```bash
./programname
```

Examples:
```bash
make hello
./hello

make mario
./mario

make credit
./credit
```
