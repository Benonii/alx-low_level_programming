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
		int status;
		char *av1[32] = {NULL};
		pid_t pid;

		*av1 = get_command();

		if (*av1 == NULL)
			continue;

		/* checks if command includes "/bin/" */

		pid = fork();
		if (pid == -1)
		{
			perror("fork: ");
			free(*av1);
			return (EXIT_SUCCESS);
		}

		if (pid == 0) /* run execve in a child process */
			execute(av1);
		else
		{
			wait(&status);
			fflush(stdin);
	       	}
	}
	return (0);
}
