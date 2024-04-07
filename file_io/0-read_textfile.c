#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of characters to read and print
 *
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 *
 * Return: the actual number of letters it could read and print
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd = open(filename, O_RDONLY);
char *buffer;
ssize_t bytes_read, bytes_written;

if (filename == NULL)
{
return (0);
}
if (fd == -1)
{
return (0);
}
buffer = (char *)malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
close(fd);

if (bytes_read == -1)
{
free(buffer);
return (0);
}
buffer[bytes_read] = '\0';
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
free(buffer);

if (bytes_written == -1 || bytes_written != bytes_read)
{
return (0);
}
return (bytes_read);
}
