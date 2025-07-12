# 50 Special Programs in C − Check If The Number Is Strong Number

## What is strong number?

Strong number is a number in which the sum of factorial of individual digits of a number is equal to the original number.

For example:

```
145 = 1! + 4! + 5!
    = 1 + 24 + 120
```

## Factorial Basics

Definition: Factorial of a positive integer n, is the number which is obtained by multiplying all positive integers less than or equal to n.

```
3! = 3 * 2 * 1
   = 6

5! = 5 * 4 * 3 * 2 * 1
   = 120
```

In general,

```
n! = n * (n-1) * (n-2) * ... * 3 * 2 * 1
```


## Probelm statement

Write a program to check whether a number is a Strong number or not?

1. Step #1 - Calculate the factorial of each digit of a number and add them.
   ```c
   q = n, fact = 1, resutl = 0;
   while (q != 0) {
       rem = q % 10; // for to obtain the last digit to n (actual number)
       for (i = 1; i <= rem; i++) { // this for factorial the rem
           fact = fact * i;
       }
       result = result + fact;
       fact = 1;
       q = q / 10;
   }
   ```

   The process are,

   ```c
   q = 145
   rem = 5
   fact = 1 * 2 * 3 * 4 * 5 = 120
   result = 0 + 120 = 120

   q = 145 / 10 = 14
   rem = 4
   fact = 1 * 2 * 3 * 4 = 24
   result = 120 + 24 = 144

   q = 14 / 10 = 1
   rem = 1
   fact = 1
   result = 144 + 1 = 145

   q = 1 / 10 = 0
   ```

2. Step #2 - Check whether the calculated result is equal to the actual number.
   ```c
   if (result == number) {
       printf("%d is a strong number", number);
   } else {
       printf("%d is not a strong number", number);
   }
   ```
