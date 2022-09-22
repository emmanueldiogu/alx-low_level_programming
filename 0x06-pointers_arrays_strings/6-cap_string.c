#include "main.h"

/**
 * *cap_string - Entry point
 * @str: entry string
 *
 * Description: function that CAPETALIZES all words of a string.
 *
 * Return: 0
 */
char *cap_string(char *str)
{
	char reg[] = ",\t;\n; .!?\"(){}";
	int ptn, i, ii;

	for (i = 0; str[i] != '\0'; i++)
	{
		ptn = 0;

		if (i == 0)
		{
			ptn = 1;
		}
		else
		{
			for (ii = 0; reg[ii] != '\0'; ii++)
			{
				if (str[i - 1] == reg[ii])
				{
					ptn = 1;
					break;
				}
			}
		}

		if (ptn == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}

	return (str);
}
