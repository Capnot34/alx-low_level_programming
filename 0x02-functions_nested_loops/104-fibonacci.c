#include <stdio.h>

/**
 *  numLength - returns the lenth of string
 *  @num : operand number
 *   Return: number of digits
 */

int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * main - Entry point for the program
 *
 * Description: Calculates and prints the sum of even-valued terms in the
 * Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n1 = 1, n2 = 2, n3;
    long sum = 0;

    while (n2 <= 4000000)
    {
        if (n2 % 2 == 0)
        {
            sum += n2;
        }

        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    printf("%ld\n", sum);

    return (0);
}
