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
		strlen++;
		_strlen_recursion(s + 1);
	}
	return (strlen);
}
