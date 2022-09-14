#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: parameter to test
 *
 * Description: Function that prints the last digit of a number
 *
 * Return: 0
 */

int print_last_digit(int n)
{
if (n < 0)
{
n = (n * (-1)) % 10;
}
else
{
n = n % 10;
}
_putchar(n + '0');
return (n);

n = n % 10;
return (n);
}
