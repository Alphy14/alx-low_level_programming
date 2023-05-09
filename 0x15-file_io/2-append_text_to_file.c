#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 * Return:  1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int index = 0, _append;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[index])
			index++;

		_append = write(fd, text_content, index);

		if (_append == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
