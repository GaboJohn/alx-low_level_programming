#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int a, b, c;

a = '0';
b = '0';
c = '0';

while (a <= '9')
{
while (b <= '9')
{
c = '0';
while (c <= '9')
{
if (a < b && b < c)
{
putchar(a);
putchar(b);
putchar(c);
if (a != '7')
{
putchar(',');
putchar(' ');
}
}
c++;
}
b++;
}
a++;
b = '0';
}
putchar('\n');
return (0);
}
