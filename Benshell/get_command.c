#include "main.h"
#include "printf.h"

/**
 * get_command - gets command from command line, checks for EOF
 *		 and removes \n character
 * Return: pointer to command(line)
 */

char *get_command()
{
	char *line = NULL;
	size_t bufsize = 0;
	int nread = 0;

	if (isatty(STDIN_FILENO == 0))
		_printf("($) ");

	nread = getline(&line, &bufsize, stdin);

	if (nread == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

	return (line);
}
