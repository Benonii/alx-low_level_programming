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

	if (isatty(STDIN_FILENO == 1))
		_printf("($) ");

	nread = getline(&line, &bufsize, stdin);

	if (nread == -1)
	{
		if (isatty(STDIN_FILENO == 1))
			_printf("\n");
		free(line);
		exit(EXIT_SUCCESS);
	}

	return (line);
}
