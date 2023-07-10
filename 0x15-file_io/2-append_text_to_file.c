#include "main.h"

/**
 * append_text_to_file - appends the specified text at the end of a file
 * @filename: name of the file to append the text to
 * @text_content: the text content to be appended to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, text_length = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[text_length])
			text_length++;

		write_result = write(file_descriptor, text_content, text_length);
		if (write_result != text_length)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}

