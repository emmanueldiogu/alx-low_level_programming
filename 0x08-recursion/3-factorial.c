#include "main.h"

/**
 * factorial - Entry point
 * @n: int
 *
 * Description: function that returns the factorial of a given number.
 *
 * Return: 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
