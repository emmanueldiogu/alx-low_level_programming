#include <stdio.h>
/**
 * main - Entry point
 * Description: print single numbers in base 10,
 * starting from 0
 * Return: 0
*/
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
