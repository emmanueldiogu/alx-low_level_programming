#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - Entry point
 * @n: entry parameter
 *
 * Description: Function to print the n times table,
 * starting with 0
 * Return: 0
*/

void print_times_table(int n)
{
int i = 0, sum = 0;
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
i++;
}
}
