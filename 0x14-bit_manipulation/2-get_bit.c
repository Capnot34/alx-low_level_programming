#include "main.h"

/**
 * get_bit - this is the value of a bit
 * @n: decimal parameter
 * @index: for the index
 * Return: gives back
 */
int get_bit(unsigned long int n, unsigned int index)
{
	 unsigned long int mask = 1;

    if (index >= sizeof(unsigned long int) * 8)
        return -1;

    mask = mask << index;
    if ((n & mask) == 0)
        return 0;
    else
        return 1;
}
