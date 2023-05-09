#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: Points to the file to be read_textfile
 * @letters: Number of letters it should read and print
 * Return: The number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	ssize_t n, m, o;

	f = malloc(sizeof(char) * letters);

	if (f == NULL || filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	m = read(o, f, letters);
	n = write(STDOUT_FILENO, f, m);

	/* checks if open, read and write executed properly */
	if (o == -1 || m == -1 || n == -1 || m  != n)
		return (0);

	free(f);
	close(o);
	return (n);
}
