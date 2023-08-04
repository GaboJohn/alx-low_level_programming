#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array containing all arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}
	return (0);
}
