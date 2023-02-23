#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c:  char to be checked
 *
 * Return : 1 if digit and 0 if not
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
