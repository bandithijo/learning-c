# 55 Special Programs in C − Floyd's Triangle

## What is Floyd's Triangle?

Floyd's Triangle (named after a computer scientis - Robert W. Floyd) is a right-angled triangular array of natural numbers.

It is filled by natural numbers consecutively starting with 1 in the top left corner.

Excample: A Flowd's Triangle with 5 rows

```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

## Implementation

```c
printf("Enter the number of rows: ");
scanf("%d", &rows);

n = 1;

for (i = 1; i <= rows; i++) {
    for (j = 1; j <= 1; j++) {
       printf("%d", n);
       n++;
    }
    printf("\n");
}
```
