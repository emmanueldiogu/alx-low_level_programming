#include "main.h"
#include <stdio.h>
/**
 * *_strstr - Entry point
 * @haystack: pointer 1
 * @needle: pointer 2
 *
 * Description: function finds the first occurrence of the
 * substring needle in the string haystack.
 * Return: 0
 */


char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] > '\0'; i++)
{
for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
{
if (haystack[j] != needle[j - i])
{
break;
}
}
if (needle[j - i] == '\0')
{
return (haystack + i);
}
}
return (0);
}
