#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int num = '0';
int letter = 'a';

while (num <= '9')
{
putchar(num);
num++;
}
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
