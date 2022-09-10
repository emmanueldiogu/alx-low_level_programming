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
int z;
while (x <= 9)
{
y = 0;
while (y <= 9)
{
z = 0;
while (z <= 9)
{
if (x != y && x < y && x != z && x < z && y != z && y < z)
{
putchar('0' + x);
putchar('0' + y);
putchar('0' + z);
if ((y + x + z) != 7 + 9 + 8)
{
putchar(',');
putchar(' ');
}
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
