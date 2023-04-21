#include <stdio.h>

/**
 * main - Prints single numbers in base 10
 * Return: Always (0)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}		
