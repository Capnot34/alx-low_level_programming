#include <stdio.h>

/**
 * main - Prints comma seperated numbers
 * Return: Always (0)
 */
int main(void)
{
	char hex;

	for (hex = 0; hex < 10; hex++)
	{
		putchar(hex + '0');
		if (hex < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
