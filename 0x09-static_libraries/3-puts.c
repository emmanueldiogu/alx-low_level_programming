#include "main.h"

/**
 * _puts - Entry point
 * @str: parameter 1
 *
 * Description: fuction that prints a string,
 * followed by new line, to stdout
 * Return: 0
 */
void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
