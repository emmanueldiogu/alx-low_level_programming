#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
char c;
int i;
long int s;
long long int lli;
float f;
printf("Size of char: %lu byte(s).\n", (unsigned long)sizeof(c));
printf("Size of int: %lu byte(s).\n", (unsigned long)sizeof(i));
printf("Size of long int: %lu byte(s).\n", (unsigned long)sizeof(s));
printf("Size of long long int: %lu byte(s).\n", (unsigned long)sizeof(lli));
printf("Size of float: %lu byte(s).\n", (unsigned long)sizeof(f));
return (0);
}
