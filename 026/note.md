# 26 Bitwise Operators in C (Part 1)

## Introduction to Bitwise Operators

```
& | ~ << >> ^
```

## Bitwise AND (&) Operator

1. It takes two bits at a time and perform AND operation.
2. AND `&` is binary operator. It takes two numbers and perform bitwise AND.
3. Result of AND is 1 when both bits are 1.

```
7 ->   0 1 1 1
4 -> & 0 1 0 0
     ---------
4 <-   0 1 0 0

7 & 4 = 4
```

## Bitwise OR (|) Operator

1. It takes two bits at a time and perform OR operation.
2. OR `|` is binary operator. It takes two numbers and perform bitwise OR.
3. Result of OR is 0 when both bits are 0.

```
7 ->   0 1 1 1
4 -> | 0 1 0 0
     ---------
4 <-   0 1 1 1

7 | 4 = 7
```

## Bitwise NOT (~) Operator

1. NOT is a unary operator.
2. Its job is to complement each bit one by one.
3. Result of NOT is 0 when bit is 1 and 1 when bit is 0.

```
7 -> ~ 0 1 1 1
     ---------
8 <-   1 0 0 0

~7 = 8
```

## Difference Between Bitwise and Logical Operators
