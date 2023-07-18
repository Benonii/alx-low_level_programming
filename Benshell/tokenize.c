#include "main.h"
#include "printf.h"

/**
 * tokenize - splits a string into the main command and following arguments
 * @line: The line to split
 *
 * Return: An array of pionters to chars
 */

char *tokenize(char *line)
{
	char *token = NULL, **tokens = NULL, *delim = " \n\t\r\a";
	int i = 0;

	tokens = malloc(32 * sizeof(char *));

	if (tokens == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, delim);
	while (token && i < 31)
	{
		tokens[i] = token;
		strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;

	return(*tokens);
}
