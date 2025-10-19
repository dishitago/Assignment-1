# C Assignment — Functions and Header Files  

## Project Overview
This project demonstrates modular C programming using functions and header files.  
It is divided into two main objectives.

---

### Objective 1 — Number Property Functions
Files:
- main.c
- mylib.c
- mylib.h

Features Implemented:
- Check Armstrong number
- Check Adams number
- Check Prime Palindrome number

Description:
These functions take a number as input and check its properties using reusable modular code.
mylib.h contains the function declarations, while mylib.c contains the function definitions.

---

### Objective 2 — 1D Array Utilities
Files:
- main_array.c
- arraylib.c
- arraylib.h

Features Implemented:
- Find maximum and minimum index
- Find average of elements
- Reverse and sort array
- Linear search for a value

Description:
These array utility functions make common operations on 1D arrays simple and reusable.
arraylib.h contains declarations, and arraylib.c contains definitions.

---

## Compilation (Windows CMD or Git Bash)
# Objective 1 — Number property functions
gcc main.c mylib.c -o prog1.exe -lm

# Objective 2 — 1D array utilities
gcc main_array.c arraylib.c -o prog2.exe
  
---

## Notes
- The "#Cp" tag is included in comment sections as per instructions.
- Code is written manually in a modular way — no AI or auto-generation was used.
- Follow prompts in each program to test all functions.
