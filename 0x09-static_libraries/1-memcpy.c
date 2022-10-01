#include "main.h"

/**
 * *_memcpy -  Entry point
 * @dest: destination
 * @src: source
 * @n: max bytes
 *
 * Description: Function that copies memory area from src to dest.
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0; i++, n--)
{
dest[i] = src[i];
}

return (dest);
}
