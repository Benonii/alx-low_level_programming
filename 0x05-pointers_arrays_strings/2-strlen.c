#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: the pointer to the string
 * Return: the size of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
