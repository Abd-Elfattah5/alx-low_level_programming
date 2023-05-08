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
	ssize_t fd, i, j;
	char *temp = malloc(letters);

	if (temp == NULL)
		return (0);

	if (!filename || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);


	i = read(fd, temp, letters);

	if (i == -1)
		return (0);

	j = write(STDOUT_FILENO, temp, i);

	if (j == -1)
		return (0);

	close(fd);
	return (j);

}
