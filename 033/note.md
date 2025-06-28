# 33 Precedence and Associativity of Operators

## Precedence of Operators

Precedence of operators come into picture when in an expression we need to decide which operator will be evaluated first. Operator with higher precedence will be evaluated first.

## Associativity of Operators

Associativity of operators came into pictur ewhen precedence of operators are same and we need to decide which operator will be evaluated first.

## Precedence and Associativity Table

| Category       | Operators                          | Associativity |
|----------------|------------------------------------|---------------|
| Parenthesis    | () [] -> . ++ --                   | Left to Right |
| Unary          | ! ~ ++ -- + - * & (type) sizeof    | Right to Left |
| Multiplicative | * / %                              | Left to Right |
| Additive       | + -                                | Left to Right |
| Bitwise Shift  | << >>                              | Left to Right |
| Relational     | < <= > >=                          | Left to Right |
| Equality       | == !=                              | Left to Right |
| Bitwise AND    | &                                  | Left to Right |
| Bitwise XOR    | ^                                  | Left to Right |
| Bitwise OR     | \|                                 | Left to Right |
| Logical AND    | &&                                 | Left to Right |
| Logical OR     | \|\|                               | Left to Right |
| Conditional    | ? :                                | Right to Left |
| Assignment     | = += -= *= /= %= &= ^= \|= <<= >>= | Right to Left |
| Comma          | ,                                  | Left to Right |

## Important Facts

1. Associativity can only help if there are two or more operators of same precedence and not when there is just one operator.

2. Operators with same precedence have same associativity as well.
