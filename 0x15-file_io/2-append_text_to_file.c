#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: The file to append to
 * @text_content: The text to be apeended
 * Return: 1 if succesful, -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, strlen(text_content));

	if (o == -1 || w == -1)
		return (-1);

	return (1);
}
