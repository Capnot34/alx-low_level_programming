#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: noflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, noflips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			noflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (noflips);
}
