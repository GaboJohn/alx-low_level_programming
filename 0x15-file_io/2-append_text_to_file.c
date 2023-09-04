#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: 1(success) otherwise -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result, file = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[file])
			file++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	result = write(fd, text_content, file);
	if (result == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
