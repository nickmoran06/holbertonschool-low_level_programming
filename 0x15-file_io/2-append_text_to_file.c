#include "holberton.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: the file name
 * @text_content: the text content
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int content = 0;
	int counter = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[counter])
			counter++;
		content = write(fd, text_content, counter);
		if (content == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
