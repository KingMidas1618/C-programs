# C Programming Practice & Projects

This repository documents my ongoing progress while learning the **C programming language**, primarily by following **Bro Code's C programming tutorial series on YouTube**.

I use this repository to practice each concept introduced in the lessons, experiment with the code, build small command-line programs, and track my development with **Git and GitHub**.

Some programs begin from concepts or exercises demonstrated during the course and are then rewritten, tested, adapted, or extended as part of my own practice.

## Learning Progress

The repository currently includes practice with:

- [x] First C programs and basic program structure
- [x] Variables and data types
- [x] Format specifiers
- [x] Arithmetic operators
- [x] User input
- [x] Basic string input and handling
- [x] Mathematical functions
- [x] Conditional statements
- [x] `switch` statements
- [x] Functions
- [x] Return values
- [x] Function prototypes
- [x] Variable scope
- [x] `while` and `do...while` loops
- [x] Random number generation
- [x] Input validation and basic error handling
- [x] Small command-line applications

This list will continue to grow as I progress through the rest of the course.

## Highlighted Programs

### ATM Simulator

A command-line ATM program that allows the user to:

- deposit money
- withdraw money
- check the current balance
- navigate a menu until choosing to exit
- handle invalid input

It also separates parts of the program into reusable functions.

[`atm.c`](atm.c)

### Basic Math Calculator

A four-operation command-line calculator supporting:

- addition
- subtraction
- multiplication
- division
- numerical input validation
- division-by-zero protection

[`mathCalc.c`](mathCalc.c)

### Rock Paper Scissors

A command-line Rock Paper Scissors game featuring:

- random computer choices
- player input validation
- functions
- conditional game logic

[`rockPaperScissors.c`](rockPaperScissors.c)

### Number Guessing Game

A number-guessing game using:

- random number generation
- repeated guesses with loops
- input and range validation
- attempt tracking

[`numberGuess.c`](numberGuess.c)

### Temperature Converter

A converter between:

- Celsius
- Fahrenheit
- Kelvin

The program also validates numerical input and warns about values below absolute zero.

[`tempConv.c`](tempConv.c)

### Mad Libs

A small interactive program focused on user input and basic string handling.

[`madLibs.c`](madLibs.c)

### Shopping Cart

A simple exercise using product names, prices, quantities, and calculated totals.

[`shoppingCart.c`](shoppingCart.c)

## Other Exercises

The repository also contains smaller programs created while learning individual C concepts.

| Topic | Files |
| --- | --- |
| Getting started | [`firstProgram.c`](firstProgram.c) |
| Variables and data types | [`variables.c`](variables.c) |
| Format specifiers | [`specifiers.c`](specifiers.c) |
| Operators | [`operators.c`](operators.c) |
| User input | [`userInput.c`](userInput.c) |
| Math functions | [`mathFunctions.c`](mathFunctions.c) |
| Conditionals | [`ifStatements.c`](ifStatements.c) |
| Functions | [`functions.c`](functions.c), [`return.c`](return.c), [`funcPrototypes.c`](funcPrototypes.c) |
| Variable scope | [`variableScope.c`](variableScope.c) |
| Loops | [`whileLoops.c`](whileLoops.c) |
| Random numbers | [`randNumbers.c`](randNumbers.c) |
| Geometry calculation | [`circleRadius.c`](circleRadius.c) |
| Compound interest | [`compInterestCalc.c`](compInterestCalc.c) |
| Weight conversion | [`weightConv.c`](weightConv.c) |

## Building and Running

Most programs can be compiled with GCC using:

```bash
gcc program.c -o program
./program
