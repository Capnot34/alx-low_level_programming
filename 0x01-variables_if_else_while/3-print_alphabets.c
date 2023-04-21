#include <stdio.h>

/**
 * main - Prints a text according number
 * Return: Always (Success)
 */
int main(void)
{
	char alphabet;
	char alphabet1;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	    putchar(alphabet);
	}

	for (alphabet1 = 'A'; alphabet1 <= 'Z'; alphabet1++)
	{
	    putchar(alphabet1);
	}
	putchar('\n');
	return (0);
}
