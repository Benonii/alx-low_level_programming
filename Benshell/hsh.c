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
		int status = 0;
		char *line = NULL;
		char **cmd = NULL;
		pid_t pid = 0;

		line = get_command();

		cmd = malloc(32 * sizeof(char *));
		*cmd = tokenize(line);

		if (*cmd == NULL)
			continue;

		/* checks if command includes "/bin/" */

		pid = fork();
		if (pid == -1)
		{
			perror("fork: ");
			free(*cmd);
			return (EXIT_SUCCESS);
		}

		if (pid == 0) /* run execve in a child process */
			execute(cmd);
		else
		{
			wait(&status);
			free(line);
	       	}
	}
	return (0);
}
