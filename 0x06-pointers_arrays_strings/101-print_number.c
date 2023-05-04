#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: address of s
 */

char *rot13(char *)
{
	int len = strlen(str);
	char *result = (char *)malloc(len + 1);

	for (int i = 0; i < len; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
		{
			result[i] = str[i] + 13;
		}
		 else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
		 {
			  result[i] = str[i] - 13;
		 }
		else {
			result[i] = str[i];
		}
	}
	result[len] = '\0';
	return (result)
}
