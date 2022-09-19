#include "main.h"

/**
 * _isupper - Entry point
 * @c: character to evaluate
 *
 * Description: Function to check for uppercase chatacter
 * Return: 0
*/

int _isupper(int c)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (c == ch)
        {
            return (0);
        }
        else
        {
            return (1);
        }
    }
    return (0);
}
