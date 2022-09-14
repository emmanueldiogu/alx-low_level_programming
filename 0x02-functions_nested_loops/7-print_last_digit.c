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
int last_digit;
n = n < 0 ? n * (-1) : n;

last_digit = n % 10;

_putchar('0' + last_digit);
return (last_digit);
}
