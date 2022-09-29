#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: pointer to char
 *
 * Description: function that returns the length of a string
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
int n = 0;

if (*s > '\0')
{
n += _strlen_recursion(s + 1) + 1;
}
return (n);
}
