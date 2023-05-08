#include <stdio.h>

/**
 * main - prints out first 50
 *
 * fibonacci suit numbers
 *
 * Return: return 0
 */

int main(void)
{
	int count = 50;
	int num1 = 1;
	int num2 = 2;
	int fib_num;

	printf("%d, %d, ", num1, num2);

	for (int i = 2; i < count; i++)
	{
		fib_num = num1 + num2;
		printf("%d, ", fib_num);
		num1 = num2;
		num2 = fib_num;
	}
	printf("\");

	return (0);
}
