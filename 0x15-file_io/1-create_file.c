#include "holberton.h"

/**
 * create_file - create a file with content
 * @filename: a filename
 * @text_content: a content
 * Return: 1 if it works
 **/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	for (i = 0; text_content[i] != '\0'; i++)
	;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (0);
	}

	if (text_content)
	{
		write(fd, text_content, i);
	}

	close(fd);

	return (1);

}
