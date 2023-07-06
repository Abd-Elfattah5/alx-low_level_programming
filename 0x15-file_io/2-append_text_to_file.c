#include "main.h"

/**
  *append_text_to_file - function to add to files
  * Return: 1 if successfull or 0 otherwise
  *@filename: name of the file to add to
  *@text_content: the text to be added
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (fd);
	i = 0;

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	return (write(fd, text_content, i) == -1 ? -1 : 1);

}
