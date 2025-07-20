# 56 Special Programs in C − Binary to Decimal Conversion

## Basic

```
1001

| 2^3 | 2^2 | 2^1 | 2^0 |
| 1   | 0   | 0   | 1   |

= 2^3*1 + 2^2*0 + 2^1*0 + 2^0*1
= 8*1 + 1*1
= 9
```

```c
printf("Enter the binary number: ");
scanf("%d", &binary);

decimal = 0;
weight = 1;

while (binary != 0) {
    reminder = binary % 10;
    decimal = decimal + reminer * weight;
    binary = binary / 10;
    weight = weight * 2;
}

printf("%d", decimal);
```
