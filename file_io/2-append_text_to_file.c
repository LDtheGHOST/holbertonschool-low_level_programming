#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on faillure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int len, written;

if (!filename)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
{
return (-1);
}
if (text_content)
{
for (len = 0; text_content[len]; len++)
;

written = write(fd, text_content, len);
if (written == -1)
return (-1);
}
close(fd);
return (1);
}
