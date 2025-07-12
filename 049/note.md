# 49 Special Programs in C− Check If The Number Is Armstrong Number

Armstrong number:

An armstrong nyumber of order n is a number in which each digit when multiplied by itself n number of times and finally added together, results the same number.

Example:

371 is a 3 digit number. Therefore, its order is 3

Now here, each digit is multiplied by itelf 3 times and finally added together and results in our original number i.e.

```
3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371
```

1. Step #1 - First find out, how many digits are there in your number.
   ```c
   count = 0;
   while (q != 0) {
       q = q / 10;
       count++;
   }
   ```

2. Step #2 - Multiply each digit n times (in our example, n = 3) and add them.
   ```c
   cnt = count, result = 0;
   while (q != 0) {
       rem = q % 10;
       while (cnt != 0) {
           mul = mul * rem;
           cnt--;
       }
      result = result + mul;
      cnt = count;
      q = q / 10;
      mul = 1;
   }
   ```

3. Step #3 - Check whether the calculated result is equal to the actual number or not.
   ```c
   if (result == number) {
      printf("%d is an Armstrong number", number);
   } else {
      printf("%d is not an Armstrong number", number);
   }
   ```
