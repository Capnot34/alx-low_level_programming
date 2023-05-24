#include "3-calc.h"

/**
 * main - a program that performs simple mathematical operations.
 * @argc: The number of arguments passed to the program.
 *  @argv: The argument list.
 *  Return: 0 on success or exit on failure.
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a, b;

	if (argc != 4)

	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", f(a, b));

	return (0);
}
