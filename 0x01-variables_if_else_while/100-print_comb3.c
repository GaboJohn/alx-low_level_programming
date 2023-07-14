#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int i = '0';
int y = '0';

while (i <= '9')
{
while (y <= '9')
{
if (!(i > y) || i == y)
{
putchar(i);
putchar(y);
if (i == '8' && y == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
y++;
}
y = '0';
i++;
}
return (0);
}
