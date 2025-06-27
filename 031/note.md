# 31 Conditional Operator in C

Conditional operator is a ternary operator.

```
 ? :
```

```c
char result;
int marks;

if (marks > 33)
{
    result = 'p';
}
else
{
    result = 'f';
}
```

On conditional operator will look like this,

```c
char result;
int marks;

result = (marks > 33) ? 'p' : 'f';
```

`(marks > 33)` is a boolean expression, therefor it will return either True or False.

`(marks > 33) ? 'p', : 'f';` is a conditional expression, whic is after all an expression, therefore it is an r-value and result is l-value.

## Quick Facts

1. Conditional operator is the only ternary operator available in the list of operators in C language.
2. As in `Expression1 ? Expression2 : Expression3`, Expression1 is the boolean expression. If we simply write 0 instread of some boolean expression than that simply means False and therefore Expression3 will get evaluated.
  ```c
  int result;
  result = 0 ? 2 : 1
  printf("%d", result); // 1
  ```
