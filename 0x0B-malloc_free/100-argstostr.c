#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments of your program
 * @ac: argc
 * @av: argv
 * Return: Pointer to char
 */

char *argstostr(int ac, char **av)
{
	int i;

	if (ac < 1)
		return (NULL);

	av = malloc(sizeof(char) * ac);

	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac - 1; i++)
	{
		return (av[i]);
	}
	return (av[i + 1]);
}
