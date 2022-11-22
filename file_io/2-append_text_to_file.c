#include "main.h"

/**
 *_strlen - counts number of characters in a string ie. length
 *@s: pointer parameter, string
 *Return: return length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 *append_text_to_file - appends text to end of a file
 *@filename: name of file
 *@text_content: NULL terminated string to add to end of file
 *Return: 1 on success. -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_text;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	write_text = write(fd, text_content, _strlen(text_content));
	if (write_text == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
