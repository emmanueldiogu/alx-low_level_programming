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
    int mult = 9;
    int i;
    for (i = 0; i <= mult; i++)
    {
        int result = i * mult;
        _putchar('0' + result);
        _putchar(',');
        _putchar(' ');
    }
    _putchar('\n');
}