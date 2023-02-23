#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: the character to be checked
 * Return: 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 97)
		return (1);
	else
		return (0);
}
