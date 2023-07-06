#include "main.h"

/**
  *create_file - function to create files
  * Return: 1 if successfull or 0 otherwise
  *@filename: name of the file to create
  *@text_content: the text to put inside the file
  */
int create_file(const char *filename, char *text_content)
{
	int i, fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (fd);
	i = 0;

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	return (write(fd, text_content, i) == -1 ? -1 : 1);

}
