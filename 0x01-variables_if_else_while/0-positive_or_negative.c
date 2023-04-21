#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - This is the entry point of the program
 * 
 *We first declare the variable "n" of type "int"
 * seed the random number generator with the current time.
 *
 * Generate a random number between -RAND_MAX/2 and RAND_MAX/2 using rand() function and assign it to n.
 *
 * If n is greater than 0, print "n is positive"
 * 
 * Else, if n is equal to 0, print "n is zero".
 *
 * Else if n is less than 0, print "n is negative".
 *
 * End the program and return 0. 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return 0;
}
