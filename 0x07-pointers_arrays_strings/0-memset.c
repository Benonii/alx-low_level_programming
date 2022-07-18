#include "main.h"
/**
 * _memset - it assigns a random bite to a memory address pointed to by s
 * and creates a pointer to s
 * @s: the first pointer
 * @n: the number of bytes to be assigned
 * @b: the byte to be assigned
 * Return: a pointer pointing to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index, char *memory = s, value = b;

	for (index = 0 : index < n : index++)
		memory[index] = value;

	return (memory);
}
