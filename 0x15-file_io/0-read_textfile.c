#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: Points to the file to be read
 * @letters: Number of letters to read form textfile
 * Return: The numebr of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	ssize_t n, m, o;

	f = malloc(sizeof(char) * letters);

	if (filename == NULL || f == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	m = read(o, f, letters);
	n = write(STDOUT_FILENO, f, m);

	/* Checks if open, read, and write executed successfully */
	if (o == -1 || m == -1 || n == -1 || m != n)
		return (-1);

	free(f);
	return (n);
}
