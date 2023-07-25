#include "main.h"
#include "printf.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	while (1) /* Infinite loop */
	{
		char *line = NULL, *token = NULL, *tokens[100] = { NULL };
		char *delim = " \n\t\r\a";
		pid_t pid = 0;
		int i = 0, a = 0, status = 0;

		line = get_command();
		if (line == NULL)
		{
			perror("malloc failure");
			continue; }
		token = strtok(line, delim);
		while (token != NULL && i < 99)
		{
			tokens[i] = token;
			token = strtok(NULL, delim);
			i++; }
		if (*tokens == NULL)
		{
			free(line);
			continue; }
		if (_strcmp(*tokens, "exit") == 0)
		{
			free(line);
			return (0); }
		a = check_for_bin(tokens);
		pid = fork();
		if (pid == -1)
		{
			perror("fork: ");
			return (EXIT_SUCCESS); }
		if (pid == 0) /* run execve in a child process */
			execute(tokens, a);
		else
		{
			wait(&status);
			free(line); }}
	return (0);
}
