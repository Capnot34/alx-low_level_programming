#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory area with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int 1;

	for (i = 0; i < n; 1++)
	{
		*(s + i) = b;
	}

	return (s);
}
