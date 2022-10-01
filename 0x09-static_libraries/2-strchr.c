#include "main.h"

/**
 * *_strchr - Entry point
 * @s: pointer to put the constant
 * @c: constant
 *
 * Description: Function that fills memory with a contant type.
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}

return ('\0');
}
