#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Calculates and prints the sum of the even-valued terms in the
 * Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n1 = 1, n2 = 2, n3;
	long sum = 2;

	while (n2 < 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		if (n2 % 2 == 0)
		{
			sum += n2;
		}
	}

	printf("%ld\n", sum);

	return (0);
}

