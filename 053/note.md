# 53 Special Programs in C − Adding Two Numbers Without Using The Plus Operator (Half Adder Method)

## Half Adder Basics

```
    +----+
A → |    |→ S (sum)
    | HA |
B → |    |→ C (carry)
    +----+

|---|---|---|---|
| A | B | S | C |
|---|---|---|---|
| 0 | 0 | 0 | 0 |
| 0 | 1 | 1 | 0 |
| 1 | 0 | 1 | 0 |
| 1 | 1 | 0 | 1 |
|---|---|---|---|

S = A xor B
C = A and B
```

## Implementation

```c
while (b != 0) {
    sum = a ^ b; // bitwise xor
    carry = (a & b) << 1; // (bitwise and) then left shift by 1
    a = sum;
    b = carry;
}
```
