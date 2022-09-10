#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabets a - z,
 * excluding letters q and e
 * Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
/*printf(ch);*/
}
else
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
