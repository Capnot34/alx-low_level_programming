#include <stdio.h>

/**
 * main - Prints alphabet in lower case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		Putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
