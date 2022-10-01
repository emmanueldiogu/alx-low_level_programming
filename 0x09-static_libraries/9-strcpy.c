#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Description: Function that copies the string pointed to by src.
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
