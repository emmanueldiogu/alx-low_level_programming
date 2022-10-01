#include "main.h"

/**
 * *_strspn - Entry point
 * @s: string
 * @accept: char to match
 *
 * Description: Function that returns the number of occurent of a string
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, cmpt = 0;

for (i = 0; s[i] >= '\0'; i++)
{
for (j = 0; accept[j] > '\0'; j++)
{
if (s[i] == accept[j])
{
cmpt++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (cmpt);
}
