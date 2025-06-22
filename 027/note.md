# 27 Bitwise Operators in C (Part 2)

## Left Shift Operator

First operand << Second operand

First operand: Whose bits get left shifted.

Second operand: Decides the number of places to shift the bits.

## Important Points

1. When bits are shifted left then trailing positions are filled with zeros.

   ```c
   #include <stdio.h>

   int main()
   {
       char var = 3;  // 3 in binary is 0000 0011
       printf("%d", var<<1);
       return 0;
   }
   ```

   How left shift works?

   ```
   var = 3
   var << 1

   3 = 0000 0011
       --------- << 1
   6 = 0000 0110
   ```

2. Left shifting is equivalent to multiplication by 2^rightOperand.
   ```
   var = 3

   var << 1
   [3 x 2^1] = 6

   var << 4
   [3 x 2^4] = 48
   ```
