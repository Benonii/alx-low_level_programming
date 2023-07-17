#include "main.h"
#include "printf.h"

/**
 * get_command - gets command from command line, checks for EOF
 *		 and removes \n character
 * Return: pointer to command(line)
 */

char *get_command()
{
	char *line;
	int nread;
	size_t n = 200;
	int i = 0;
	char *av3[32] = {NULL};
	char *token, *delim = " \n\t\r";

	if (isatty(STDIN_FILENO) == 1)
	{
		_printf("($) ");
		line = malloc(sizeof(char) * n);
		nread = getline(&line, &n, stdin);

		/* Checks for EOF character */
		if (nread == -1)
		{
			free(line);
			free(*av3);
			exit(EXIT_SUCCESS);
		}

		token = strtok(line, delim);

		/* assignes the tokenized string to argv for execve to use */
		while (token && i < 31)
		{
			av3[i] = token;
			token = strtok(NULL, delim);
			i++;
		}

		av3[i] = NULL;

		if (_strcmp(*av3, "exit") == 0)
		{
			free(line);
			exit(EXIT_SUCCESS);
		}

		free(line);
		return (*av3);
	}

	else
	{
		line = malloc(sizeof(char) * n);
		nread = getline(&line, &n, stdin);

		/* Checks for EOF character */
		if (nread == -1)
		{
			free(line);
			free(*av3);
			exit(EXIT_SUCCESS);
		}

		token = strtok(line, delim);

		/* assinges the tokinized string to argv for execve to use */
		while (token && i < 31)
		{
			av3[i] = token;
			token = strtok(NULL, delim);
			i++;
		}

		av3[i] = NULL;

		if (_strcmp(*av3, "exit") == 0)
		{
			free(line);
			free(*av3);
			exit(EXIT_SUCCESS);
		}

		free(line);
		return (*av3);
	}
}
