#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: file to copy to
 * Return: ...
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
 * copy_file - copies content of one file into another
 * @file_from: source file
 * @file_to: destination file
 * Return: ...
 */

void copy_file(const char *file_from, const char *file_to)
{
	int op1, op2, rd;
	char buff[1024];

	op1 = open(file_from, O_RDONLY);
	if (!file_from || op1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	op2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((rd = read(op1, buff, 1024)) > 0)
	{
		if (write(op2, buff, rd) != rd || op2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(op1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op1);
		exit(100);
	}

	if (close(op2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2);
		exit(100);
	}
}
