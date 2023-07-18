#include "main.h"
/**
 *_isalpha - function that checks for alphabetic character
 *@c: collect the alphabetic character
 *Return: 1 if c is low or cap otherwise 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
