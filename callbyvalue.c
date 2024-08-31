#include <stdio.h>

void modifyValue(int x);

int main() {
    int a = 10;

    modifyValue(a);  // Call the function with 'a' as argument
    printf("Value of a after function call: %d\n", a);  // 'a' remains unchanged

    return 0;
}

void modifyValue(int x) {
    x = 20;  // Modify the copy of the value, not the original
    printf("Value inside function: %d\n", x);
}

/* In C programming, when a function is called using **call by value**, the function's parameters (also called formal parameters) are essentially new variables created by the function to hold the values passed to it by the caller (the actual parameters).

Let’s break down the process step by step using the example code:

### Example Code:
```c
#include <stdio.h>

void modifyValue(int x);

int main() {
    int a = 10;          // 'a' is an integer variable with the value 10

    modifyValue(a);      // Call modifyValue and pass 'a' as the argument
    printf("Value of a after function call: %d\n", a);  // 'a' is still 10

    return 0;
}

void modifyValue(int x) {
    x = 20;              // 'x' is a copy of 'a', not 'a' itself
    printf("Value inside function: %d\n", x);  // Prints 20
}
```

### Step-by-Step Breakdown:

1. **Variable Declaration in `main`:**
   - In the `main` function, `int a = 10;` declares an integer variable `a` and initializes it with the value `10`.

2. **Function Call:**
   - `modifyValue(a);` is a function call that passes the value of `a` (which is `10`) to the function `modifyValue`.
   - The function `modifyValue` has a parameter `int x`. When the function is called, this parameter `x` is **created** as a new variable within the function's scope.

3. **Copying the Value:**
   - At the moment of the function call, the value of `a` (which is `10`) is copied into the parameter `x`.
   - So, `x` is a new integer variable within the `modifyValue` function, and it is initialized with the value `10`.

4. **Function Execution:**
   - Inside `modifyValue`, you have `x = 20;`, which changes the value of `x` to `20`.
   - However, this change affects only `x`, the local copy of the value. The original variable `a` in the `main` function is unaffected by this change.

5. **Returning to `main`:**
   - After `modifyValue` finishes execution, the program control returns to `main`.
   - The variable `a` in `main` still holds the value `10` because `x` in `modifyValue` was only a copy and had no effect on `a`.

### Why and How is `x` Created?

- **Memory Allocation:**
  - When `modifyValue(a);` is called, the C runtime allocates memory for the parameter `x` in the function's stack frame. The stack frame is a region of memory used to manage function calls, local variables, and parameters.
  
- **Copying the Value:**
  - The value of `a` (which is `10`) is copied into this newly allocated memory space. Thus, `x` is created as a local variable within `modifyValue`, holding the value `10`.

- **Scope and Lifetime:**
  - The variable `x` exists only within the scope of `modifyValue`. Once the function finishes executing, `x` is destroyed, and its memory is reclaimed.

### Visualization:

Imagine that when you call `modifyValue(a)`, the C runtime temporarily creates a new box (variable `x`) and places a copy of `a`'s content (`10`) into this box. Inside the function, you can do whatever you like with this box (`x`), but once you’re done (when the function returns), the box is discarded, and it doesn't affect the original box (`a`) in `main`.

### Summary:

- **`x` is a new variable** created within the `modifyValue` function, specifically allocated to store the value passed by the caller (`a`).
- The value of `a` is **copied** into `x`, meaning `x` and `a` are separate variables in memory.
- Any modifications to `x` do not affect `a`, because `x` is just a copy, created and used within the function scope only.*/