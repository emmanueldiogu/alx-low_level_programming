#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
*/
int main(void)
{
int x = 0;
int y;
while (x <= 9)
{
y = 0;
while (y <= 9)
{
if (x != y && x < y)
{
putchar('0' + x);
putchar('0' + y);
if ((y + x) != 17)
{
putchar(',');
putchar(' ');
}
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
