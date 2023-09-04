#include "main.h"

/**
 * create_file - creates a file and writes content to it
 * @filename: file to be created
 * @text_content: text content to be written
 *
 * Return: 1 (success) otherwise -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t written;
	int file = 0, fd;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file = 0; text_content[file]; file++)
			continue;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (file > 0)
	{
		written = write(fd, text_content, file);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
