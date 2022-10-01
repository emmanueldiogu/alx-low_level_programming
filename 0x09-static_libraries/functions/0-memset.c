#include "main.h"

/**
 * *_memset - Entry point
 * @s: pointer
 * @b: constant
 * @n: max bytes
 *
 * Description: fills memory with a constant byte.
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
