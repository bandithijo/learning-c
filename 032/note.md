# 32 Comma Operator in C

1. Comma operator can be used as "separator". Widely used as separator.
   ```c
   int a = 3, b = 4, c = 8;
   ```

2. Comma operator can be used as an "operator".
   ```c
   int a = (3, 4, 8);
   printf("%d", a); // 8
   ```
   Comma operator returns the "rightmost" operand in the expression and it simply evaluates the rest of the operands and finally reject them.

3. Comma operator is having least precedence among all the operators available.

   Example 1:

   ```c
   int a;
   a = 3, 4, 8; // == (a = 3), 4, 8;

   printf("%d", a); // 3
   ```

   Example 2:

   ```c
   int a = 3, 4, 8; // == int a = 3; int 4, int 8; error on int 4 & int 8

   printf("%d", a); // Error
   ```

   Example 3:

   ```c
   int a;
   a = (3, 4, 8); // == int a = (3, 4, 8);

   printf("%d", a); // 8
   ```
