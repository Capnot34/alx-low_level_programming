#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: nothing.
 */

void print_numbers(void)
{
	 int d;

	for(d = '0'; d <= '9'; d++)
    {
        putchar(d);
    }

    putchar('\n');
}
