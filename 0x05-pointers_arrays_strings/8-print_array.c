#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: pointer parameter
 * @n: int parameter
 *
 * Description: Function that prints n elements of an array of integers,
 * followed by a new line.
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
