#include "main.h"

/**
 * _isdigit - Entry point
 * @c: entry parameter
 *
 * Description: Function that checks for a digit
 *
 * Return: 0
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}

return (0);
}
