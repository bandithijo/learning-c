# 54 Special Programs in C − Fibonacci Series

## Problem statement:

Write a program to print Fibonacci series upto n number of terms.

The term Fibonacci comes from the name of an Italian Mathematician Leonardo of Pisa, known as Fibonacci.

## What is Fibonacci Series?

In fibonacci series, next term is obtained by taking sum of previous two terms.

```
|--------|---|---|---|---|---|---|
| n      | 1 | 2 | 3 | 4 | 5 | 6 |
|--------|---|---|---|---|---|---|
| fib(n) | 0 | 1 | 1 | 2 | 3 | 5 |
|--------|---|---|---|---|---|---|
```

Mathematically,

```
fib(n) = fib(n-1) + fib(n-2)
```

```c
int a = 0, b = 1;

for (i = 1; i <= n; i++) {
    printf("%d ", a);
    result = a + b;
    a = b;
    b = result;
}
```

Example:

```
n = 6

Iteratrion 1:
a = 0
result = 1
a = 1
b = 1

Iteration 2:
a = 1
result = 2
a = 1
b = 2

Iteration 3:
a = 1
result = 3
a = 2
b = 3

Iteration 4:
a = 2
result = 5
a = 3
b = 5

Iteration 5:
a = 3
result = 8
a = 5
b = 8

Iteration 6:
a = 5
result = 13
a = 8
b = 13
```
