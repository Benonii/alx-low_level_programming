#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The string
 * Return: 1 0r 0
 */
int is_palindrome(char *s)
{
	char forwardString;
	char backwardString;

	if (*s)
	{
		forwardString = _putchar(*s);
		forwardString += is_palindrome(s + 1);
	}

	if (*s)
	{
		backwardString += is_palindrome(s + 1);
		backwardString = _putchar(*s);
	}

	if forwardString == backwardString
		return (1);
	else
		return (0);
}

