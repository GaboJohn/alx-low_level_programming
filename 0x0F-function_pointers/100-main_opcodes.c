#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print opcodes
 * @x: number of bytes
 * @y: address of main function
 *
 */
void print_opcodes(char *y, int x)
{
	int n;

	for (n = 0; n < x; n++)
	{
	printf("%.02hhx", y[n]);
	if (n < x - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - prints its own opcodes
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, x);
	return (0);
}
