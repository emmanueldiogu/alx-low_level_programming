#include "main.h"

/**
 * *_strncat - Entry point
 * @dest: Entry destination
 * @src: source
 * @n: Entry number
 *
 * Description: function that concatenates two strings
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, count;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[len + count] = src[count];

	/* return pointer to the resulting string */
	dest[len + count] = '\0';

	return (dest);
}
