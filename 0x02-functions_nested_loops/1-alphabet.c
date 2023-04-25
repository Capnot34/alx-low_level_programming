#include <main.h>

/**
 * Print alphabets in lower case
 *
 * Return: (Always success)
 */
void print_alphabet(void)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return(0);
}
