#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of a file to create
 * @text_content: content to write to file
 *
 * Return: 1(success), -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes;
	int fd;
	int x = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[x] != '\0')
			x++;

		bytes = write(fd, text_content, x);
		if (bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
		close(fd);
		return (1);
}
