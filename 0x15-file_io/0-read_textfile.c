#include "main.h"

/**
 * read_textfile - reads and prints text file
 * @filename: file to be read
 * @letters: letters to read and print
 *
 * Return: number of letters read and printed otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t x;
	ssize_t y;
	FILE *file;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	x = fread(buffer, sizeof(char), letters, file);
	if (x == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[x] = '\0';
	y = write(STDOUT_FILENO, buffer, x);
	free(buffer);
	fclose(file);
	if (y != x)
		return (0);
	return (x);
}
