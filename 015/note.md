# 15 Constants in C (Part 1)

## What is constants?

As the name suggests -- something that never change.

Once defined cannot be modified later in the code.

## Defining constants

1. using `#define`
2. using `const`

## Using #define

```
#define NAME value
```

\* Sometimes NAME also called **Macro**.

Job of preprocessor (not compiler) to replace NAME with value.

```c
#include <stdio.h>

#define PI 3.14159

int main() {
    printf("%.5f", PI);

    return 0;
}
```

### Takeways

1. Please don't add semocolon at the end.
2. Choosing capital letters for NAME is good practice.
3. Whatever inside double quotes "..." won't get replaced.
4. We can use macros like functions.
   ```c
   #include <stdio.h>

   #define add(x, y) x+y

   int main()
   {
       printf("addition of two numbers: %d", add(4, 3));

       return 0;
   }
   ```
5. We can write multiple lines using `\`.
   ```c
   #include <stdio.h>

   #define greater(x, y) if (x > y) \
                             printf("%d is greater than %d", x, y); \
                         else \
                             printf("%d is lesser than %d", x, y);

   int main()
   {
       greater(5, 6);

       return 0;
   }
   ```
6. First expansion then evaluation.
   ```c
   #include <stdio.h>

   #define add(x, y) x + y

   int main()
   {
       printf("result of expression a * b + c is: %d", 5 * add(4, 3));

       return 0;
   }
   ```
   ```
   result of expression a * b + c is: 23
   ```
7. Some predefined macros like __DATE__, __TIME__ can print current date and time.
   ```c
   #include <stdio.h>

   int main()
   {
       printf("Date: %s\n", __DATE__);
       printf("Time: %s\n", __TIME__);

       return 0;
   }
   ```
   ```
   Date: June 21 2025
   Time: 12:57:08
   ```
