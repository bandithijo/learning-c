# 29 Bitwise Operators in C (Part 4)

## Inclusive OR

1. Either A is 1 or B is 1 or Both are 1, then the output is 1.
2. Including BOTH

| A | B | A OR B |
|---|---|--------|
| 0 | 0 | 0      |
| 0 | 1 | 1      |
| 1 | 0 | 1      |
| 1 | 1 | 1      |

## Exclusive OR (XOR)

1. Either A is 1 or B is 1 then the output is 1. But when Both A and B are 1 then output is 0.
2. Excluding BOTH

| A | B | A XOR B |
|---|---|---------|
| 0 | 0 | 0       |
| 0 | 1 | 1       |
| 1 | 0 | 1       |
| 1 | 1 | 0       |

## Example

1. Bitwise XORD (^) is binary operator. It takes two numbers and perform bitwise XOR.
2. Result of XOR is 1 when two bits are different other wise the result is 0.

```
7 →   0 1 1 1
4 → ^ 0 1 0 0
    ---------
3 ←   0 0 1 1

7 ^ 4 = 3
```
