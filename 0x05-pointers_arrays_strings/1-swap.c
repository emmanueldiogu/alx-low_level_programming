#include "main.h"

/**
 * swap_int - Entry point
 * @a: first pointer paramenter
 * @b: second pointer parameter
 * Description: Function that swaps the values of two integers.
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
