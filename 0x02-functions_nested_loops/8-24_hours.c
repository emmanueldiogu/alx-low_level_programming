#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: Function that prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
int h1 = 0, h2, m1, m2;
while (h1 <= 2)
{
h2 = 0;
while (h2 <= 3)
{
m1 = 0;
while (m1 <= 5)
{
m2 = 0;
while (m2 <= 9)
{
_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + m1);
_putchar('0' + m2);
_putchar('\n');
m2++;
}
m1++;
}
h2++;
}
h1++;
}
}
