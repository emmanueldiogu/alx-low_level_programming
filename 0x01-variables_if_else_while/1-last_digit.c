#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
int n, m;

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (n > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", m, n);
}
else if (n == 0)
{
printf("Last digit of %i is %i and is 0\n", m, n);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", m, n);
}
return (0);
}
