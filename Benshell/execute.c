#include "main.h"
#include "printf.h"

/**
 * execute - executes the given commands
 * @argv: takes in the command
 * @a: 5 if the command starts with "/bin/"
 * return: None
 */

void execute(char *av4[32])
{
	char *full_path = NULL, *path, *token, *delim = ":";

	path = getenv("PATH");

	token = strtok(path, delim);

	while (token)
	{
		size_t dir_len = strlen(token);
		size_t cmd_len = strlen(*av4);
		size_t slash_len = 1; /* Length of '/' */

		full_path = malloc(dir_len + slash_len + cmd_len + 1);

		if (!full_path)
		{
			perror("malloc failure");
			exit(EXIT_SUCCESS);
		}

		strcpy(full_path, token);
		strcat(full_path, "/");
		strcat(full_path, av4[0]);

		if ((access(full_path, X_OK)) == 0)
		{
			if ((execve(full_path, av4, environ)) == -1)
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
		_printf("hsh: %s: command not found\n", av4[0]);
		exit(EXIT_SUCCESS);
	}
}
