#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: name of the text file to be read and printed.
 * @letters: the number of letters it should read and print.
 * Return: he actual number of letters it could read and print,
 * and if the file can not be opened or read, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num, _read, fd;
	char *temp = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (temp == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	_read = read(fd, temp, letters);
	num = write(STDOUT_FILENO, temp, _read);

	if (_read != num)
		return (0);

	free(temp);
	close(fd);

	return (num);
}
