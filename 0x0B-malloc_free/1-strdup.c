#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to a newly allocated space in mem.
 * @str: point char
 *
 * Description: Function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * Return: 0
 */
char *_strdup(char *str)
{
int i = 0, size = 0;
char *ml;

if (str == NULL)
{
return (NULL);
}

for (; str[size] != '\0'; size++)
;

ml = malloc(size * sizeof(*str) + 1);

if (ml == 0)
{
return (NULL);
}
else
{
for (; i < size; i++)
ml[i] = str[i];
}
return (ml);

}
