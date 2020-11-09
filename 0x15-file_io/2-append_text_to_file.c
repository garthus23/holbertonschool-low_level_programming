#include "holberton.h"

/**
 * append_text_to_file - append text to a file
 * @filename: a file name
 * @text_content: a text to add
 * Return: 1 when it works
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int fd;

	for (i = 0; text_content[i] != '\0'; i++)
	;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		write(fd, text_content, i);
	}

	close(fd);

	return (1);

}
