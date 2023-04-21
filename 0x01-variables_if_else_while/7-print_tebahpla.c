#include <stdio.h>

/**
 * main - Prints lowercase letters in reverse
 * Return: Always (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
