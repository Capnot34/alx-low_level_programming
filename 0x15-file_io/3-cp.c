#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, bytes_read, bytes_written;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((bytes_read = read(fd_r, buffer, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || (bytes_written = write(fd_w, buffer, bytes_read)) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}

	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_r) < 0 || close(fd_w) < 0)
	{
		if (close(fd_r) < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);

		if (close(fd_w) < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);

		exit(100);
	}

	return (0);
}