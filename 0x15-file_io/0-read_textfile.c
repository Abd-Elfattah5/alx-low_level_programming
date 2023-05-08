#include "main.h"

/**
  * read_textfile - function to read from a file
  * and print to the standerd output of the screen
  * Return: the actual number of letters it could print
  * or 0 otherwise
  *@filename: the name of the file to read
  *@letters: the number of letters to read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, fd;
	char temp = 0;

	if (!filename || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	i = 0;

	while (temp != EOF)
	{
		if (read(fd, &temp, 1) == -1)
			return (0);
		if (write(STDOUT_FILENO, &temp, 1) == -1)
			return (0);
		i++;
	}
	close(fd);
	return (i);

}
