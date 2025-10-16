CS50x — Week 1 — C
🧾 Overview

Week 1 introduces programming in C — focusing on basic syntax, types, functions, loops, and conditionals.
This problem set includes three main exercises: Hello, Mario, and Credit.

💬 1. Hello
Description

Your first C program!
Prompts the user for their name and greets them with “hello, name”.

Usage
$ ./hello
What is your name?
Clive
hello, Clive

Concepts

Input and output with get_string and printf

Strings and format specifiers

🧱 2. Mario (more/less)
Description

Recreates the pyramid patterns from Super Mario Bros. using hashes (#).
There are two versions:

mario less — a left-aligned half-pyramid.

mario more — a double-sided pyramid.

Usage (less)
$ ./mario
Height: 4
   #
  ##
 ###
####

Usage (more)
$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####

Concepts

Nested for loops

Conditional logic

Input validation

Printing patterns

💳 3. Credit
Description

Checks the validity of a credit card number using Luhn’s Algorithm and identifies its type:

AMEX (15 digits, starts with 34 or 37)

MASTERCARD (16 digits, starts with 51–55)

VISA (13 or 16 digits, starts with 4)

Usage
$ ./credit
Number: 378282246310005
AMEX


If invalid:

$ ./credit
Number: 123456789
INVALID

Concepts

Loops and arithmetic with long values

Conditionals

Modular arithmetic (%)

Luhn’s checksum algorithm

🧠 Key Learning Outcomes

Understand how to compile and run C programs with make and ./program.

Work with variables, loops, conditionals, and user input.

Learn to debug using printf statements and the debugger.

Get familiar with algorithmic thinking (Credit’s checksum).

⚙️ How to Run Programs

Compile each program with:

make programname


Then run it:

./programname


Examples:

make hello
./hello
make mario
./mario
make credit
./credit
