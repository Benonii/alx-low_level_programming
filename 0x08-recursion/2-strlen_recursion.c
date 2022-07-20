#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		strlen++;
	}
	return (strlen);
}
