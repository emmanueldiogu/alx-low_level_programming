#include "main.h"

/**
 * is_prime_number - Entry point
 * @n: int
 *
 * Description: function that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * Return: 0
 */
int is_prime_number(int n)
{
return (is_prime(n, 2));
}

/**
 * is_prime - Entry point
 * @n: int
 * @y: int
 *
 * Description: function that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * Return: 0
 */
int is_prime(int n, int y)
{
if (y >= n && n > 1)
return (1);
else if (n % y == 0 || n <= 1)
return (0);
else
return (is_prime(n, y + 1));
}
