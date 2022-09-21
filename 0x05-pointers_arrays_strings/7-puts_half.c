#include "main.h"

/**
 * puts_half - Entry point
 * @str: Entry parameter
 *
 * Description: Function that prints half of a string,
 * followed by a new line.
 * Return: 0
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = (len + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
