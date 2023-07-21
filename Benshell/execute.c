#include "main.h"
#include "printf.h"

/**
 * execute - executes the given commands
 * @argv: takes in the command
 * @a: 5 if the command starts with "/bin/"
 * return: None
 */

void execute(char **av, int a)
{
	char *full_path = NULL, *path = NULL, *token = NULL, *delim = ":";
	size_t dir_len = 0, cmd_len = 0, slash_len = 1;

	if (a == 5)
	{
		if ((execve(av[0], av, environ)) == 0)
		{
			perror("execve");
			exit(EXIT_SUCCESS);
		}
	}

	path = getenv("PATH");


	if (path == NULL || *path == '\0')
	{
		perror("PATH variable not set");
		exit(EXIT_SUCCESS);
	}

	token = strtok(path, delim);

	if (token == NULL)
	{	
		perror("empty");
		exit(EXIT_SUCCESS);
	}
	while (token)
	{
		dir_len = strlen(token);
		cmd_len = strlen(av[0]);

		full_path = malloc(dir_len + cmd_len + slash_len + 1);

		if (!full_path)
		{
			perror("malloc failure");
			exit(EXIT_SUCCESS);
		}

		strcpy(full_path, token);
		strcat(full_path, "/")
			;
		strcat(full_path, av[0]);

		if ((access(full_path, X_OK)) == 0)
		{
			if ((execve(full_path, av, environ)) == -1)
			{
				perror("execve");
				exit(EXIT_SUCCESS);
			}
		}

		else
		{
			free(full_path);
			token = strtok(NULL, delim);
		}
	}

	if (token == NULL)
	{
		_printf("hsh: %s: command not found\n", av[0]);
		free(*av);
		exit(EXIT_SUCCESS);
	}}
