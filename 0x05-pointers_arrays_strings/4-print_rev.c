#include "main.h"

/**
 * print_rev - entry point
 * @s: parameter
 * Description: function that prints a string, in reverse,
 * followed by a new line.
 * Return: 0
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;

while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
