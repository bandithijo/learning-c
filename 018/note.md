# 18 Basic Input Function – scanf

## What is scanf?

Stands for Scan Formatted string.

Accept character, string, and numeric data from the user using standard input-Keyboard.

Scanf also use format specifiers like printf.

For example: 

`%d` to accept input of integer type.

`%c` to accept input of character type.

`%s` to accept a string.

and so on...

```c
int var;
scanf("%d", &var);
```

## Why & is important as prefix on variable in case of scanf?

While scanning the input, scanf needs to store that input data somewhere.

To store this input data, scanf needs to know the memory location of a variable.

And here comes the ampersand `&` to rescue.

`&` is also called as "address-of operator".

`&var` means "Address of var".
