#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: int 1
 * @y: int 2
 *
 * Description: function that returns the value of x raised to the power of y.
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y == 1)
{
return (x);
}
return (x * _pow_recursion(x, (y - 1)));
}
