#include "main.h"
#include <stdio.h>

/**
 * error_check - checks if files can be opened.
 * @fromFile: fromFile.
 * @toFile: toFile.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_check(int fromFile, int toFile, char *argv[])
{
	if (fromFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (toFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fromFile, toFile, err_close;
	ssize_t bytes_read, bytes_write;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp fromFile toFile");
		exit(97);
	}

	fromFile = open(argv[1], O_RDONLY);
	toFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_check(fromFile, toFile, argv);

	bytes_read = 1024;
	while (bytes_read == 1024)
	{
		bytes_read = read(fromFile, buf, 1024);
		if (bytes_read == -1)
			error_check(-1, 0, argv);
		bytes_write = write(toFile, buf, bytes_read);
		if (bytes_write == -1)
			error_check(0, -1, argv);
	}

	err_close = close(fromFile);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fromFile);
		exit(100);
	}

	err_close = close(toFile);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fromFile);
		exit(100);
	}
	return (0);
}
