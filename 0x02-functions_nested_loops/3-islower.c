#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: collect alphabets
 * Return: (1) if c is lower otherwise (0)
 */
int _islower(int c)
{
	char a;
	int lower = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		{
			lower = 1;
		}
	}
		return (lower);
}
