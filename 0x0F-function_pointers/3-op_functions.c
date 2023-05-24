#include "3-calc.h"

/**
 * op_add - adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers.
 *  @a: The first integer.
 *  @b: The second integer.
 *  Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides two integers and returns the quotient.
 *  @a: The first integer.
 *  @b: The second integer.
 *  Return: The division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod -finds the modulo of two integers.
 *  @a: The first integer.
 *  @b: The second integer.
 *  Return: The modulo of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
