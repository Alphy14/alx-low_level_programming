#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: name of file to be created.
 * @text_content: a NULL terminated string to write to the file.
 *Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int num, index = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[index])
		index++;

	num = write(fd, text_content, index);

	if (num == -1)
		return (-1);
	close(fd);

	return (1);
}
