#include <stdio.h>

/**
 * main - prints count of multiples
 *
 * of 3 or 5 below 1024
 *  * Return: return 0
 */
int main(void)
{
	int sum = 0;

    for (int i = 0; i < 1024; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    int digit;
    while (sum > 0) {
        digit = sum % 10;
        putchar(digit + '0');
        sum /= 10;
    }
    putchar('\n');

    return 0;
