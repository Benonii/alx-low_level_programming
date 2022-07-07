#include "main.h"
/**
 * _isupper - Identifies uppercaase letters
 * @c: The alphabet holder variable
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
