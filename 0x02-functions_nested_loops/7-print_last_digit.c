#include "main.h"

/**
 * print_last_digit - Entry point
 * @n - parameter to test
 *
 * Description: Function that prints the last digit of a number
 *
 * Return: 0
*/

int print_last_digit(int n)
{
n = n % 10;
_putchar('0' + n);
return (0);
}
