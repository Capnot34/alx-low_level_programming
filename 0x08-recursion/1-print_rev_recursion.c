#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /*base case */
	{
		return;
	}
	_print_rev_recursion(s + 1); /* recursive call */
	_putchar(*s);
}
