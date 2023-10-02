#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: name of a file
 * @text_content: content to add at the end of file
 *
 * Return: 1(success), -1(failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes = write(fd, text_content, 0);
			if (bytes == -1)
			{
				close(fd);
				return (-1);
			}
	}
	close(fd);
	return (1);
}
