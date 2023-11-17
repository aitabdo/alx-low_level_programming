#include "main.h"

/* @aitabdo..... */
/**
 * error_handler - handles errors for cp.
 * @exit_code: exit code.
 * @message: error message.
 * @type: data type for format.
 */

void error_handler(int exit_code, char *message, char type, ...)
{
	va_list arguments;

	va_start(arguments, type);
	if (type == 's')
		dprintf(STDERR_FILENO, message, va_arg(arguments, char *));
	else if (type == 'd')
		dprintf(STDERR_FILENO, message, va_arg(arguments, int));
	else if (type == 'N')
		dprintf(STDERR_FILENO, message, "");
	else
		dprintf(STDERR_FILENO, "Error: Does not match any type\n");
	va_end(arguments);
	exit(exit_code);
}
/* @aitabdo..... */
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return:  0 (success).
 */

int main(int argc, char *argv[])
{
	char buff[1024];
	int fd_from, fd_to;
	ssize_t R, W;

	if (argc != 3)
		error_handler(97, "Usage: cp file_from file_to\n", 'N');

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_handler(98, "Error: Can't read from file %s\n", 's', argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_handler(99, "Error: Can't write to %s\n", 's', argv[2]);

	while ((R = read(fd_from, buff, 1024)) > 0)
	{
		W = write(fd_to, buff, R);
		if (W == -1)
			error_handler(99, "Error: Can't write to %s\n", 's', argv[2]);
	}

	if (R == -1)
		error_handler(98, "Error: Can't read from file %s\n", 's', argv[1]);
	if (close(fd_from) == -1)
		error_handler(100, "Error: Can't close fd %d\n", 'd', fd_from);
	if (close(fd_to) == -1)
		error_handler(100, "Error: Can't close fd %d\n", 'd', fd_to);

	return (0);
}
