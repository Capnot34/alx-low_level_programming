#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if there is one or more chars
 * in the string @b that is not 0 or 1, or if @b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;

	if (b == NULL)
		return 0;

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return 0;

		bit = *b - '0';
		result = (result * 2) + bit;
	}

	return result
}
