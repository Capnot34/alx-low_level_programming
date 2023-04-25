#include "main.h"

/**
 * Print_alphabets - function to print alphabets in lower case
 *
 * Return: (Always success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
