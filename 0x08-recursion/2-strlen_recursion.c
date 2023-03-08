#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the strng
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		_strlen_recursion(s + 1);
		return (len);
	}
	else
		return (0);
}
