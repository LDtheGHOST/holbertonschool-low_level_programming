#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: Filename to the file
 * @text_content: Content to append
 * Return: Result
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_w = write(fd, text_content, _strlen(text_content));
		if (bytes_w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * _strlen - Return length of a string
 * @s: (int) text
 * Return: (int) length
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
