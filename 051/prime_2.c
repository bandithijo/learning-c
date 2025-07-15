#include <stdio.h>
#include <math.h>

int main()
{
    int number, i;
    int is_prime = 1; // Assume prime until proven otherwise

    printf("Please enter a number (only positive integers): ");
    scanf("%d", &number);

    if (number < 2) {
        is_prime = 0; // 0 and 1 are not prime
    } else {
        int max_divisor = (int) sqrt(number); // No need for ceil()
        for (i = 2; i <= max_divisor; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d is a prime number", number);
    } else {
        printf("%d is not a prime number", number);
    }

    return 0;
}
