#include <stdio.h>

/**
 * main - Prints single numbers in base 10
 * Return: Always (0)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		if (num != '10')
		{
			putchar(num);
		}
	putchar('\n');
	return (0);
}
