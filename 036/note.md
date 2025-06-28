# 36 C Programming (Rapid Fire Quiz-1)

## 1. Sizeof operator return size in? 

A. Bits
B. Bytes 👈
C. Kilobytes
D. Megabytes

## 2. Which of the following is the correct inline declaration of variable?

A. int a; b; c;
B. int a, int b, int c;
C. int a, b, c; 👈

## 3. What does printf function returns?

A. Size of integer
B. Size of character
C. Number of characters printed on the screen 👈
D. Size of variable

## 4. ASCII decimal range of characters from A..Z is?

A. 65-90 👈
B. 97-122
C. 100-127
D. 1-28

## 5. Size of integer?

A. 32 bytes
B. 8 bytes
C. 16 bytes
D. Depends from machine to machine 👈

## 6,. Consider the following variable declarations and definitions in C?

i) int 39 = 1;
ii) int var_39 = 2;
iii) int _ = 3;

Which of the following is correct?

A. Both i) and ii) are valid
B. Only ii) is valid
C. Both ii) and iii) are valid 👈
D. None of the above

## 7. Consider the following lines.

```c
int var;
extern int var;
```

Which of the following is correct?

A. Both statements only declare variables and not define them
B. Both statements declare and define variables
C. Statement 1 declares a variable and statement 2 defines a variable
D. Statement 1 declare and define a variable and statement 2 just declare a variable 👈

## 8. Predict the output

```c
#include <stdio.h>

int var = 5;
int main()
{
    int var = var;

    printf("%d", var);

    return 0;
}
```

A. 5
B. Compiler error
C. Garbage value 👈
D. None of the above

## 9. Predict the output

```c
#include <stdio.c>

int main()
{
    {
        int var = 10;
    }

    {
        printf("%d", var);
    }

    return 0;
}
```

A. 10
B. Compiler error 👈
C. Garbage value
D. None of the above

## 10. Predict the output

```c
#include <stdio.h>

int main()
{
    unsigned int var = 10;

    printf("%d", ~var);

    return 0;
}
```

A. 10
B. -10
C. -11 👈
D. -5
