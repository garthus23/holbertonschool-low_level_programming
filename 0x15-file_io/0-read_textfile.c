#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - read a text file
 * @filename: a file to open
 * @letters: number of letters to print
 * Return: number of printed letters
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i;
	char buf[letters];

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		printf("Failed to open the file");
		exit(1);
	}

	read(fd, buf, letters);
	buf[letters] = '\0';

	close(fd);

	for (i = 0; buf[i] != '\0'; i++)
	{
		putchar(buf[i]);
	}
	return (i);
}
