#include "holberton.h"

/**
 * create_file - a function that creates a file
 * @filename: the file name
 * @text_content: the text content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int content = 0;
	int counter = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[counter])
		counter++;
	if (text_content != NULL)
	{
		content = write(fd, text_content, counter);
		if (content == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
