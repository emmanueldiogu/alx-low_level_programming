#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of array int
 * @c: char
 *
 * Description: Function that creates an arrya of chars,
 * and initializes it with a specific char.
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
char *mc = malloc(size);
if (size == 0 || mc == 0)
{
return (0);
}

while (size--)
{
mc[size] = c;
}

return (mc);
}
