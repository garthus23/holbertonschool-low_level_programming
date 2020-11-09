#include "holberton.h"

/**
 * read_textfile - read a text file
 * @filename: a file to open
 * @letters: number of letters to print
 * Return: number of printed letters
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int i;
	char buf[letters];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	read(fd, buf, letters);
	buf[letters] = '\0';

	close(fd);

	for (i = 0; buf[i] != '\0'; i++)
	{
		write(1, &buf[i], 1);
	}
	return (i);
}
