#include "main.h"

/**
 * print_times_table - Entry point
 * @n: entry parameter
 *
 * Description: Function to print the n times table,
 * starting with 0
 * Return: 0
*/

void print_times_table(int n)
{
int i = 0, mult, j;
if (n < 0 || n > 15)
return;
while (i <= n)
{
for (j = 0; j <= n; j++)
{
mult = i * j;
if (j == 0)
{
_putchar('0' + mult);
}
else if (mult <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + mult);
}
else if (mult <= 99)
{
_putchar(' ');
_putchar('0' + mult / 10);
_putchar('0' + mult % 10);
}
else
{
_putchar('0' + mult / 100);
_putchar('0' + (mult - 100) / 10);
_putchar('0' + mult % 10);
}
if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
i++;
}
}
