# 28 Bitwise Operators in C (Part 3)

## Right Shift Operator

First operand >> Second operand

First operand: Whose bits get right shifted.

Second operand: Decides the number of places to shift the bits.

## Importan Points

1. When bits are shifted right then leading positions are filled with zeros.

   ```c
   #include <stdio.h>

   int main()
   {
       char var = 3; // 3 in binary is 0000 0011
       printf("%d", var>>1);
       return 0;
   }
   ```

   How right shift works?

   ```
   var = 3
   var >> 1

   3 = 0000 0011
       --------- >> 1
   1 = 0000 0001
   ```

2. Right shifting is equivalent to division by 2^rightOperand.

   ```
   var = 3
   var >> 1
   [3 / 2^1] = 1

   var = 32;
   var >> 4
   [32 / 2^4] = 2
   ```
