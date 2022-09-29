#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * @n: int
 *
 * Description: function that returns natural square root of a number.
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - Entry point
 * @n: int entry
 * @y: interval
 *
 * Description: function that returns natural square root of a number.
 *
 * Return: 0
 */
int square(int n, int y)
{
if (y * y == n)
{
return (y);
}
else if (y * y < n)
{
return (square(n, y + 1));
}
return (-1);
}
