#include "holberton.h"

/**
 * read_textfile - a function that reads a text file and\
 * prints it to the POSIX standard output
 *
 * @filename: the file name
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, fd_2 = 0, fd_3 = 0;
	char *buf = NULL;

	buf = malloc(sizeof(char) * letters);

	if ((!buf) || (!filename))
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fd_2 = read(fd, buf, letters);
	if (fd_2 == -1)
		return (0);
	buf[fd_2] = '\0';
	fd_3 = write(STDOUT_FILENO, buf, fd_2);
	if (fd_3 == -1)
		return (0);

	close(fd);
	free(buf);

	return (fd_2);
}
