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
	int o, p, r, c, d;
	char buf[BUFSIZ];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit (97);
	}

	p = open(av[1], O_RDONLY);
	if (p < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}

	o = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(p, buf, BUFSIZ)) > 0)
	{
		if (o < 0 || write(o, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(p);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	c = close(p);
	d = close(o);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", p);
		exit(100);
	}
	if (d < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(100);
	}
	return (0);
}

