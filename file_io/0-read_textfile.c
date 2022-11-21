#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: pointer to the file containing the text
 *@letters: number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *text;
	ssize_t read_text;
	ssize_t write_text;

	if (filename == NULL)
	{
		return (0);
	}
	text = malloc(sizeof(*filename) * letters);
	if (text == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(text);
		close(fd);
		return (0);
	}
	read_text = read(fd, text, letters);
	if (read_text == -1)
	{
		free(text);
		close(fd);
		return (0);
	}
	write_text = write(STDOUT_FILENO, text, read_text);
	if (write_text == -1)
	{
		free(text);
		close(fd);
		return (0);
	}
	free(text);
	close(fd);
	return (read_text);
}
