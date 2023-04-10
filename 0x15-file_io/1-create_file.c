#include "main.h"

/**
 * create_file - creates a file
 * @filename: The name of the file being created
 * @text_content: Text to be written into the file
 * Return: 1 if success, -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int o, wr;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(o, text_content, strlen(text_content));

	if (o == -1 || wr == -1)
		return (-1);

	close(0);

	return (1);
}
