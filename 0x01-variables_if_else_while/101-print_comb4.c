#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int i = '0';
int y = '0';
int x = '0';

while (i <= '7')
{
while (y <= '8')
{
while (x <= '9')
{
if (i > y && y < x)
{
putchar(i);
putchar(y);
putchar(x);
if (!(i == '7' && y == '8' && x == '9'))
{
putchar(',');
putchar(' ');
}
}
x++;
}
x = '0';
y++;
}
y = '0';
i++;
}
putchar('\n');
return (0);
}
