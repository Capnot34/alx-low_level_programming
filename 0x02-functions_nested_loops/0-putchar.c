#include <unistd.h>
#include <string.h>

/**
 * main - print putchar
 * Return: always 0
 */

int main(void)
{
	write(1, "_putchar\n", strlen("_putchar\n"));
	return (0);
}
