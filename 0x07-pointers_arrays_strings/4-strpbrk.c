#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: string
 * @accept: string to match
 *
 * Description: Function that search a string for any of a set of bytes.
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;

i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}

return (0);
}
