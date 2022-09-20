#include "main.h"

/**
 * rev_string - entry point
 * @s: parameter
 *
 * Description: function that reverses a string
 *
 * Result: 0
 */
void rev_string(char *s)
{

int len, i, hl;
char rep;

for (len = 0; s[len] != '\0'; len++)
;

i = 0;

hl = len / 2;

while (hl--)
{
rep = s[len - i - 1];
s[len - i - 1] = s[i];
s[i] = rep;
i++;
}
}
