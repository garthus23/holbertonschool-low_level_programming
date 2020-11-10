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

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		if ((write(fd, text_content, i)) == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);

}
