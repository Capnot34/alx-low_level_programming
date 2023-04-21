#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and prints its last digit.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is %d ", n, abs(n % 10));

    if (abs(n % 10) > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (abs(n % 10) == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return (0);
}

