# 22 Increment and Decrement Operators in C (Part 1)

## What are increment and decrement operators?

Inrement operator is used to increment the value of a variable by one. Similarly, decrement operator is used to decrement the value of a variable by one.

```c
// increment
int a = 5;
a++; // a = 6

// decrement
int a = 5;
a--; // a = 4
```

Both are unary operators. Because they are applied on single operand.

## Types

1. Pre-increment operator `++a;`
2. Pre-decrement operator `--a;`
3. Post-increment operator `a++;`
4. Post-decrement operator `a--;`

You cannot use "rvalue" before or after increment/decrement operator.

```c
(a+b)++; // error! lvalue required as increment operand
++(a+b); // error! lvalue required as increment operand
```

> Compiler is expecting a variable as an increment operand but we are providing an expression (a + b) which does not have the capability to store data (rvalue).

lvalue(left value): simply means an object that has an identifiable location in memory (i.e. having an address).
  - In any assignment statement "lvalue" must have the capability to hold the data.
  - lvalue "must be a variable" because they have the capability to store the data.
  - lvalue cannot be a function, expression (like a+b) or a constant (like 3, 4, etc.).

rvalue (right value): simply means an object that has no identifiable location in memory.
  - Anything which is capable of returning a constant expression or value.
  - Expression like `a+b` will return some constant value.

```
a++;
  a    =  a + 1  ;
------    ------
lvalue    rvalue

(a+b)++;
(a+b)  = (a+b) + 1 ;
------   ---------
rvalue    rvalue
```

## What is the difference between pre-increment and post-increment operator or pre-decrement and post-decrement operator?

Pre - means first increment/decrement then assign it to another variable.

Post - means first assign it to another variable then increment/decrement.
