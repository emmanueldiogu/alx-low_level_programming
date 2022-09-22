#include "main.h"

/**
 * leet - Entry point
 * @str: char array
 *
 * Description: Function that encodes a string into 1337.
 *
 * Return: 0
 */

char *leet(char *str)
{
int i, ii;
char s1[] = "aeotl";
char S1[] = "AEOTL";
char s2[] = "43071";

for (i = 0; str[i] != '\0'; i++)
{
for (ii = 0; ii < 5; ii++)
{
if (str[i] == s1[ii] || str[i] == S1[ii])
{
str[i] = s2[ii];
break;
}
}
}
return (str);
}
