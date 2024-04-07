#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file.
 * @filename: name of the file
 * @text_content: terminated string to write to the file
 *
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”
 **/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

if (fd == -1)
{
perror("open");
return (-1);
}
if (text_content != NULL)
{
len = write(fd, text_content, strlen(text_content));
if (len == -1)
{
perror("write");
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
