#include "main.h"

/**
 * _islower: Entry point
 * 'c': parameter to be checked
 * Description: Return 1 if lowercase else return 0
 * Return: 0
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
