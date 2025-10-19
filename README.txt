# C Assignment: Functions and Header Files

This assignment demonstrates modular C programming using custom header files.

## Files:
- mylib.h / mylib.c: Implementations for number property checks (Armstrong, Adams, Prime Palindrome).
- arraylib.h / arraylib.c: Implementations for 1D array utility functions (Max/Min, Average, Sort, Reverse, Search).
- main.c: Main program file containing the menu-driven system (Objective 1) and test cases for array utilities (Objective 2).

## How to Compile and Run:

The program must be compiled by linking all implementation files together.

1.  **Compile:**
    ```bash
    gcc main.c mylib.c arraylib.c -o prog -lm
    ```
    *Note: The `-lm` flag is required because the `mylib.c` uses functions like `pow()` and `round()` from the math library.*

2.  **Run:**
    ```bash
    ./prog
    ```
