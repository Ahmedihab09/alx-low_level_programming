#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdarg.h>

/**
 * error - Print an error message and exit with the specified code.
 * @code: The exit code.
 * @format: The format string for the error message.
 * @...: Additional arguments for the format string.
 */
void error(int code, const char *format, ...) {
	va_list args;
	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - Copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success, or an error code on failure.
 */

int main(int argc, char *argv[])
{
        int fd_from;
        int fd_to;
        char buffer[1024];
        ssize_t n;
        const char *file_from;
        const char *file_to;

        if (argc != 3)
        {
                error(97, "Usage: %s file_from file_to\n", argv[0]);
        }

        file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	
	if (fd_from == -1)
	{
		error(98, "Error: Can't read from file %s\n", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);

	if (fd_to == -1)
	{
		error(99, "Error: Can't write to file %s\n", file_to);
	}

	while ((n = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_to, buffer, n) != n)
		{
			error(99, "Error: Can't write to file %s\n", file_to);
		}
	}

	if (n == -1)
	{
		error(99, "Error: Can't write to file %s\n", file_to);
	}

	if (close(fd_from) == -1)
	{
		error(100, "Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1)
	{
		error(100, "Error: Can't close fd %d\n", fd_to);
	}

	return (0);
}





