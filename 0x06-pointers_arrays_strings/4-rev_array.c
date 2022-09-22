#include "main.h"

/**
 * reverse_array - Entry point
 * @a: array
 * @n: number of elements
 *
 * Description: Function that reverses the content of an array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int count = 0, mid;

	for (mid = n / 2; mid > 0; mid--, count++)
	{
		a[n - count - 1] += a[count];
		a[count] = a[n - count - 1] - a[count];
		a[n - count - 1] = a[n - count - 1] - a[count];
	}
}
