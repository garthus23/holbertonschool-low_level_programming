#include "holberton.h"

/**
 * checkclose - check if fd is close
 * @fd1: file descriptor 1
 * @fd2: file descriptor 2
 * Return: Nothing
 **/
void checkclose(int *fd1, int *fd2)
{
	if (close(*fd1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd1);
		exit(100);
	}
	if (close(*fd2))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd2);
		exit(100);
	}

}



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
	int total;
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (buf)
	{
		while ((total = read(fd1, buf, 1024)) > 0)
		{
			if ((write(fd2, buf, total)) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
		if (total == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
	}
	checkclose(&fd1, &fd2);
	free(buf);
	return (0);

}
