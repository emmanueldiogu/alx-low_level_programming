#include "main.h"

/**
 * _abs - Entry point
 * @n: parameter to check
 *
 * Description: function that computes the absolute value of an integer.
 *
 * Return: 0
 */

int _abs(int n)
{
if (n < 0)
{
n = n * (-1);
_putchar(n);
}
else
{
_putchar(n);
}

return (0);
}
