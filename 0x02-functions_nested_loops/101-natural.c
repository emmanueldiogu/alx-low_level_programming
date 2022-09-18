#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Function to compute sum of all multiples of 3
 * or 5 below 1024 (excluded)
 * Return: 0
*/

int main(void)
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
printf("%i\n", sum);
return (0);
}
