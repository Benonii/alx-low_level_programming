#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Arguments
 * Return: Always 0
 */

int main (int ac, char **av)
{
	int res;
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (av[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	
	if (av[2] == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	res = cp_content(av[1], av[2]);
	printf("%d", res);

	return (0);
}

int cp_content(char *file_from, char *file_to)
{
	char *buf;
	int o, op, r, w, c, cl;

	buf = malloc(1024);
	o = open(file_from, O_RDONLY);
	op = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	r = read (o, buf, 10000);
	w = write(op, buf, r);

	free(buf);
	c = close(o);
	cl = close(op);

	if (o == -1 || op == -1 || r == -1 || w == -1 || r != w)
	{
		return (-1);
	}
	
	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", c);
		exit(100);
	}

	if (cl == -1)
        {
                dprintf(2, "Error: Can't close fd %d", cl);
                exit(100);
        }

	return (1);
}
