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
	char *token = NULL, *tokens[100] = { NULL }, *delim = " \n\t\r\a";
	int i = 0;

	token = strtok(line, delim);

	while (token != NULL && i < 99)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
		i++;
	}

	return(*tokens);
}
