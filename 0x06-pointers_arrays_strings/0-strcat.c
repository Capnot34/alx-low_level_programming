#include "main.h"

/**
 * _strcat- function that concatenates two strings.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char* ptr = dest;

	while (*ptr != '\0')
	{
		 ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
