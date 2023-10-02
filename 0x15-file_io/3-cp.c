#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

char *create_buffer(char *file);
void close_file(int fd);

/**
* create_buffer - Allocates 1024 bytes for a buffer.
* @file: The name of the file buffer is storing chars for.
*
* Return: A pointer to the newly-allocated buffer.
*/
char *create_buffer(char *file)
{
char *buffer = malloc(BUFFER_SIZE);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
* close_file - Closes a file descriptor and handles errors.
* @fd: The file descriptor to be closed.
*/
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description:
*   This program takes two command-line arguments: file_from and file_to.
*   It copies the content of file_from to file_to. If the argument count is
*   incorrect, it exits with code 97. If file_from does not exist or cannot
*   be read, it exits with code 98. If file_to cannot be created or written to,
*   it exits with code 99. If file_to or file_from cannot be closed, it exits
*   with code 100.
*/
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

if (from == -1 || to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open files %s or %s\n", argv[1], argv[2]);
free(buffer);
exit(98);
}

while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
{
w = write(to, buffer, r);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
close_file(from);
close_file(to);
exit(99);
}
}

if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
close_file(from);
close_file(to);
exit(98);
}

free(buffer);
close_file(from);
close_file(to);

return (0);
}
