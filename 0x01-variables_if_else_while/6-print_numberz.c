#include <stdio.h>

/* main - Prints numbers from 0 to 10
 * Return: Always (0)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
            putchar(num);
	}
	putchar('\n');
	return (0);
}
