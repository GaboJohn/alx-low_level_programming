#include "main.h"

/**
 * read_textfile - Read text file and prints it to POSIX STDOUT
 * @filename: string pointer
 * @letters: number of letters to be printed
 * Return: number of printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, writ;
	char *buffer;
	int fd;


	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);
	writ = write(STDOUT_FILENO, buffer, rd);


	free(buffer);
	close(fd);

	return (writ);
}
