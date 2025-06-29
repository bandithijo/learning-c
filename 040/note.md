# 40 do-while Loop

## Difference Between While Loop and Do-While Loop

While

```c
int i = 0;
while (i > 0)
{
    printf("%d", i);
    i--;
}

// output: no output
```



Do-While

```c
int i = 0;
do
{
    printf("%d", i);
    i--;
} while (i > 0);

// outptu: 0
```

## When should I prefer do-while over while?

Write a program which alows user to enter an integer until user enters a value zero.

```c
int n;

printf("Enter an integer: ");
scanf("%d", &n);

while (n != 0)
{
    printf("Enter an integer: ");
    scanf("%d", &n);
}

printf("You are out of the loop");
```

```c
int n;
do
{
    printf("Enter an integer: ");
    scanf("%d", &n);
} while (n != 0);

printf("You are out of the loop");
```
