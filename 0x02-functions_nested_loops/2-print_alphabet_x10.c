#include "main.h"

/**
 * print_alphabet_x10: Entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
int a = 0;
char ch;
while (a <= 9)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
a++;
}
_putchar('\n');
}