#include "main.h"

/**
 * malloc_checked - array for prints a string
 *  @b: number of memory
 *   Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (!p)
	{
		exit(98);
	}

	return (p);
}
