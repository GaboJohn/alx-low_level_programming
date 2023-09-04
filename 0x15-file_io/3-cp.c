#include "main.h"
#include <stdio.h>
/**
 * print_error - handles errors
 * @file_to: file to copy
 * @file_from: file to copy from
 * @argv: arg vector
 * Return: no return
 */
void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
}
/**
 * main - copy from one file to another
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int file_from, file_to, err_close;
char buff[1024];
ssize_t written, result;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
	exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
print_error(file_from, file_to, argv);
written = 1024;
while (written == 1024)
{
	written = read(file_from, buff, 1024);
	if (written == -1)
		print_error(-1, 0, argv);
	result = write(file_to, buff, written);
	if (result == -1)
	print_error(0, -1, argv);
}
err_close = close(file_from);
if (err_close == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
}
err_close = close(file_to);
if (err_close == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	exit(100);
}
return (0);
}
