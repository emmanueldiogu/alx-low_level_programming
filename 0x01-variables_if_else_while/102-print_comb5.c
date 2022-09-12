#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int x = 0;
int y, z, a;
while (x <= 9)
{
y = 0;
while (y <= 9)
{
z = 0;
while (z <= 9)
{
a = 0;
while (a <= 9)
{
if (!(x == a && z == y))
{
putchar('0' + x);
putchar('0' + y);
putchar(' ');
putchar('0' + z);
putchar('0' + a);
if (!((y + x) == 17 && (z + a) == 17 && z == 9))
{
putchar(',');
putchar(' ');
}
}
a++;
}
z++;
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
