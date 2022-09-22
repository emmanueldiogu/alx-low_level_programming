#include "main.h"

/**
 * *string_toupper - Entry point
 * @str: Entry string
 *
 * Description: Function that changes all lowercase letters to uppercase.
 *
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}

	return (str);
}
