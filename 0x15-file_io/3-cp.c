#include "holberton.h"

/**
 * main - copy content of a file to an other
 * @ac: number of arguments
 * @av: the files
 * Return: 0 when it works
 **/

int main(int ac, char **av)
{
	int fd1;
	int fd2;
	int i;
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	read(fd1, buf, 1024);
	close(fd1);
	fd2 = open(av[2], O_CREAT | O_WRONLY, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to NAME_OF_THE_FILEi\n");
		exit(99);
	}
	if (buf)
	{
		for (i = 0; buf[i] != '\0'; i++)
		;
		write(fd2, buf, i);
	}
	close(fd2);
	return (0);

}
