#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * error_file - checks if a file can be opened or not.
 * @file_from: file from
 * @file_to: file to
 * @argv: Argument vector.
 * Return: no return value.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0 (Success).
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t num, idx;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	idx = 1024;
	while (idx == 1024)
	{
		idx = read(file_from, buffer, 1024);
		if (idx == -1)
			error_file(-1, 0, argv);
		num = write(file_to, buffer, idx);
		if (num == -1)
			error_file(0, -1, argv);
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
