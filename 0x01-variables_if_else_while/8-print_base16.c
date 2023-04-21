#include <stdio.h>

/**
 * main - Prints hexadecimal numbers in lower case
 * Return: Always (Success)
 */
int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}

	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');

	return (0);
}
