#include "main.h"

/**
 * main - Copies the content of a source file to a destination file
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, x, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Unable to read from file %s\n", argv[1]);
		exit(98);
	}

	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || write(fd_w, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Unable to write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}

	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Unable to read from file %s\n", argv[1]);
		exit(98);
	}

	m = close(fd_r);
	n = close(fd_w);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Unable to close file descriptor %d\n", fd_r);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Unable to close file descriptor %d\n", fd_w);
		exit(100);
	}

	return (0);
}
