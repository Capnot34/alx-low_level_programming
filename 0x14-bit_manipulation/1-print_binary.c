#include "main.h"

/**
 * print_binary - Prints out the the binary representation of a number
 * @n: holds the number
 */
void print_binary(unsigned long int n)
{
	int i;
    int size = sizeof(int) * 8;  // Assuming integers are 32 bits

    for (i = size - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        char c = bit + '0';
        write(1, &c, 1);  // Writes the character directly to stdout
    }
}
