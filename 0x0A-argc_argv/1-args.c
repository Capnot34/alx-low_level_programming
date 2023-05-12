#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 *  @argv: Arguments
 *  Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
    /* Print the number of arguments passed to the program */
    printf("%d\n", argc - 1);

    return (0);
}
