#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: the character being checked
 *
 * Return: 1 if alphabet 0 if not
 */

int _isalpha(int c)
{
	if (c > 65 && c < 123)
		return (1);
	else
		return (0);
}
