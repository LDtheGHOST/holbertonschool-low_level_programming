/**
 * program that copies the content of a file to another file.
 *
 * Usage: cp file_from file_to
 * if the number of argument is not the correct one, exit with code 97 and
 * print Usage: cp file_from file_to, followed by a new line,
 * on the POSIX standard error
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it, exit with code 98 and
 * print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line,
 * on the POSIX standard error
 * where NAME_OF_THE_FILE is the first argument passed to your program
 * if you can not create or if write to file_to fails, exit with code 99 and
 * print Error: Can't write to NAME_OF_THE_FILE, followed by a new line,
 * on the POSIX standard error
 * where NAME_OF_THE_FILE is the second argument passed to your program
 * if you can not close a file descriptor , exit with code 100 and
 * print Error: Can't close fd FD_VALUE, followed by a new line,
 * on the POSIX standard error
 * where FD_VALUE is the value of the file descriptor
 * Permissions of the created file: rw-rw-r--. If the file already exists,
 * do not change the permissions
 * You must read 1,024 bytes at a time from the file_from to
 * make less system calls. Use a buffer
 * You are allowed to use dprintf
 **/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * print_error_and_exit - function to print error message and exit
 * with the specified code
 * @exit_code: code to print on the POSIX standard error
 * @message: message error to print
 * Return: exit code
 **/
void print_error_and_exit(int exit_code, const char *message)
{
		dprintf(STDERR_FILENO, "%s\n", message);
			exit(exit_code);
}

/**
 * main - check for the correct number of arguments
 * @argc: number of arguments
 * @argv: srting to arguments
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
		int fd_from, fd_to;
			const char *file_from = argv[1];
				const char *file_to = argv[2];
					char buffer[BUFFER_SIZE];
						ssize_t bytes_read, bytes_written;
						
							if (argc != 3)
									{
												print_error_and_exit(97, "Usage: cp file_from file_to");
													}
							
								fd_from = open(file_from, O_RDONLY);
								
									if (fd_from == -1)
											{
														dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
																exit(98);
																	}
									
										fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
										
											if (fd_to == -1)
													{
																dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
																		close(fd_from);
																				exit(99);
																					}
											
												while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
														{
																	bytes_written = write(fd_to, buffer, bytes_read);
																	
																			if (bytes_written == -1)
																						{
																										dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
																													close(fd_from);
																																close(fd_to);
																																			exit(99);
																																					}
																				}
													if (bytes_read == -1)
															{
																		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
																				close(fd_from);
																						close(fd_to);
																								exit(98);
																									}
													
														if (close(fd_from) == -1)
																{
																			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
																					exit(100);
																						}
															if (close(fd_to) == -1)
																	{
																				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
																						exit(100);
																							}
																return (0);
}
_
