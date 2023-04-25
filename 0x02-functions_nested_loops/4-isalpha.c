#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
