#include "main.h"

/**
 * main - copies content from one file to another
 * ac: number of arguments
 * av: The arguments
 *
 * Return: Always 0
 */

int main(int ac, char *av[])
{
	int o, r, w;
	char *content = NULL;

	if (ac != 3)
	{
		perror("cp");
		exit (97);
	}

	o = open(av[0], O_RDONLY,0664);

	r = read(o, content, sizeof(av[0]));

	w = write(

