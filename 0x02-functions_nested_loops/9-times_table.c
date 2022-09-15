#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: function that prints the 9 times table,
 * starting with 0
 * Return: 0
 */
void times_table(void)
{
    int mult;
    int j;
    int i = 0;
    while (i <= 9)
    {
        j = 0;
        while (j <= 9)
        {
            mult = i * j;
            if (j == 0)
            {
                _putchar('0' + mult);
            }
            else if (mult <= 9)
            {
                _putchar(' ');
                _putchar('0' + mult);
            }
            else
            {
                _putchar('0' + mult / 10);
                _putchar('0' + mult % 10);
            }
            if (j < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
            j++;
        }
        _putchar('\n');
        i++;
    }
}