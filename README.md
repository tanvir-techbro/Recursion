# Recursion Practice

A simple C++ repository to understand and demonstrate **recursion** — one of the most powerful yet sometimes confusing concepts in programming.

## What is Recursion?

Recursion is a programming technique where a function calls **itself** to solve a problem by breaking it down into smaller, similar sub-problems.

Key elements of recursion:
- **Base case** — A condition that stops the recursion (prevents infinite calls)
- **Recursive case** — The part where the function calls itself with a smaller input

### Classic Examples Included:
- **Factorial** → n! = n × (n-1) × (n-2) × ... × 1  
  Example: `factorial(5) = 120`
- **Fibonacci Sequence** → Each number is the sum of the two preceding ones  
  Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...

Both are implemented using recursive functions in this repo.

## Files in this Repository

| File              | Description                              |
|-------------------|------------------------------------------|
| `factorial.cpp`   | Recursive implementation of factorial   |
| `fibonacci.cpp`   | Recursive implementation of Fibonacci   |

## How to Use / Run the Code

1. Make sure you have a C++ compiler installed (g++ recommended)
   - On Linux / Termux: `pkg install g++` or `apt install g++`
   - On Windows: Install MinGW or use an IDE like Code::Blocks / VS Code

2. Compile and run any file:

   ```bash
   # For factorial
   g++ factorial.cpp -o factorial
   ./factorial
   # For fibonacci
    g++ fibonacci.cpp -o fibonacci
    ./fibonacci

## How to Copy / Clone This Repository
You can get this repo on your computer in two main ways:
### Option 1: Using Git
```
git clone https://github.com/tanvir-techbro/Recursion.git
```
### Option 2: Download as ZIP

1. Click the green Code button → Download ZIP
2. Extract the ZIP file and open the folder

Future Plans: Planning to add more recursive examples.

Feel free to contribute or suggest problems!
