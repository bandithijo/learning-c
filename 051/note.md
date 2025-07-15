# 51 Special Programs in C − Check If The Number Is Prime Number

## Problem statement:

Write a program to check whether a number is prime or not?

## What is prime number?

* Prime number: A number greater than 1 is called a prime number, if it has only two factors, namely 1 and the number itself.
  ```
  2, 3, 5, 7, 11, 13, ...
  ```

* Composite number: A composite number is a positive integer which is not prime i.e. which has factors other than 1 and itself.
  ```
  4, 6, 8, 9, 10, ...
  ```

## Question - Is 1 a prime number?

No. It is not a prime number because according to the definition of prime numbers. A prime number is a number which has exactly two divisors, 1 and itself. But 1 has only one divisor i.e. itself. Therefore it is not a prime number.

Another reason — It violates the fundamental theorem of arithmetic.

According to this theorem — Every positive integer greater than one can be written uniquely as the product of primes.

Example,

```
9 = 3 * 3
```

We can also can write,

```
9 = 3 * 3 * 1
9 = 3 * 3 * 1 * 1
9 = 3 * 3 * 1 * 1 * 1
```

In order to find whether a number is prime or not, We first need to calculate the square root of that number and then we divide that number ny numbers less than or equal to the square root of that number. If it is divisibel by any of the numbers than we can say that the number is not a prime number else it is a prime number.

Example: suppose we need to fnid whether 23 is prime number or not.

1. Step 1 - Take square root of 23. Which is nearly 4.7958 = 5
2. Step 2 - Devide 23 by numbers greater than 2 and less than or equal to 5. If it is divisible by any of those numbers than it is not prime else it is prime.

As 23 is not divisible by any of those numbers therefore, 23 is a prime number.

## Program

1. Part 1 - Finding The Square Root
   ```c
   #include <math.h>
   int main()
   {
       int x, val1;
       val1 = ceil(sqrt(x));
   }
   ```
   Example:
   ```
   sqrt(2) = 1.414
   ceil(1.414) = 2
   ```

2. Part 2 - Check The Divisibility
   ```c
   int val2 = x, count = 0;
   for (i = 2; i <= val1; i++) {
       if (val2 % i == 0) {
           count = 1;
       }
   }
   ```

3. Part 3 - Check Wheteher A Number is Prime or Not
   ```c
   if ((count == 0 && val1 != 1) || val2 == 2 || val2 == 3) {
       printf("%d is a prime number", val2);
   } else {
       printf("%d is not a prime number", val2);
   }
   ```
