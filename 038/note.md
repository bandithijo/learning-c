# 38 Conditionals (Switch)

## What is Switch?

Switch is a great replacement to long else if constructs.

```c
int x = 2;

if (x == 1)
    printf("x is 1");
else if (x == 2)
    printf("x is 2");
else if (x == 3)
    printf("x is 3");
else
    printf("x is a number other than 1, 2, and 3");
```

```c
int x = 2;

switch(x)
{
    case 1: printf("x is 1");
            break;
    case 2: printf("x is 2");
            break;
    case 3: printf("x is 3");
            break;
    default: printf("x is a number other than 1, 2, and 3");
            break;
}
```

## Facts Related to Switch

1. You are not allowed to add duplicate cases.
2. Only those expressions are allowed in switch which results in an integral constant value.
3. Float value is not allowed as constant value in case label. Only integer constans/constant expressions are allowed in case label.
4. Variable expressions are not allowed in case labels. Although macros are allowed.
5. Default can be placed anywhere inside switch. It will still get evaluated if no match is found.
