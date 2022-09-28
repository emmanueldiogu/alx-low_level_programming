#include "main.h"

/**
 * set_string - entry point
 * @s: pointer to pointer
 * @to: pointer
 *
 * Description: Function that sets the value of a pointer to a char.
 *
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
