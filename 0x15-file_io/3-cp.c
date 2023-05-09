#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * main - entry point , a program to copy two files
  * Return: always (0) success
  *@argc: number of arguments
  *@argv: the arguments given to the program
  */

int main(int argc, char *argv[])
{
	int fd_1, fd_2, rd_l  = 1024, wr_l = 0;
	char temp[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_1 = open(argv[1], O_RDONLY);

	if (fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (rd_l == 1024)
	{
		rd_l = read(fd_1, temp, 1024);

		if (rd_l == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr_l = write(fd_2, temp, rd_l);

		if (wr_l == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(98);
	}
	if (close(fd_1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1), exit(100);
	if (close(fd_2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2), exit(100);
	return (0);
}
