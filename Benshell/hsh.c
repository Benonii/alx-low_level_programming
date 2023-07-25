#include "main.h"
#include "printf.h"

/**
 * interactive - shell in interactive mode
 *
 * Return: Always 0
 */

int interactive()
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
			continue;}
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
			break; }
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

/**
 * non_interactive - shell in non_interactive mode
 *
 * Return: Always 0
 */

int non_interactive(char *line)
{
	while (1)
	{
		char *token = NULL, *tokens[100] = { NULL };
		char *delim = " \n\t\r\a";
		pid_t pid = 0;
		int i = 0, a = 0, status = 0;

		if (line == NULL)
		{
			perror("malloc failure");
			return (0);}
		token = strtok(line, delim);
		while (token != NULL && i < 99)
		{
			tokens[i] = token;
			token = strtok(NULL, delim);
			i++; }
		if (*tokens == NULL)
		{
			free(line);
			return (0); }
		if (_strcmp(*tokens, "exit") == 0)
		{
			free(line);
			return  (0); }
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

int readline(int fd, char *buffer, int max_len) {
    int bytes_read = 0;
    char ch;
    while (bytes_read < max_len && read(fd, &ch, 1) == 1) {
        buffer[bytes_read++] = ch;
        if (ch == '\n')
            break;
    }
    return bytes_read;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int fd = 0;
	char line[100];
	int a = 0;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			perror("file couldn't be opened");
			return (EXIT_SUCCESS);
		}

		while (readline(fd, line, sizeof(line)) > 0)
			a = non_interactive(line);
	}

	else
		a = interactive();
	return (a);
}
