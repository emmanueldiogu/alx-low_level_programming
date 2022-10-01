#include "main.h"

/**
 * *_strcat - Entry point
 * @dest: Entry char 1
 * @src: Entry char 2
 *
 * Description: Function that concatenates two strings.
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j = -1;

	for (i = 0; dest[i] != '\0'; i++)
		;

	do {
		j++;
		dest[i] = src[j];
		i++;
	} while (src[j] != '\0');

	return (dest);
}
