#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: ASCII value of a letter
 * Return: 1 if success and 0 if fail
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
