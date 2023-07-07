#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The decimal number
 * @index: The index of the bit
 *
 * Return: The value of the bit at the specified index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return -1;

	mask <<= index;
	if ((n & mask) == 0)
		return 0;
	else
		return 1;
}
