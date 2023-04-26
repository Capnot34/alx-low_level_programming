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
	int sum = 0;

	 for (int i = 0; i < 1024; i++)
	 {
		 if (i % 3 == 0 || i % 5 == 0)
		 {
			 sum += i;
		 }
	 }

	 int digit;
	  while (sum > 0)
	  {
		  digit = sum % 10;
		  putchar(digit + '0');
		   sum /= 10;
	  }
	  putchar('\n');

	  return (0);
}
