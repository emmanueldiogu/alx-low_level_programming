#include "main.h"

/**
 * _strlen - Entry point
 * @s: entry parameter
 *
 * Description: Function that returns the length of a string.
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
