#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments string
 *
 * Description: program that prints its name, followed by a new line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, result, input;

	result = 0;

	if (argc <= 1)
	{
		printf("%d\n", result);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		input = strtol(argv[i], NULL, 10);
		if (input <= 0)
		{
			printf("Error\n");
			return (1);
			break;
		}
		
		result += input;
	}

	printf("%d\n", result);

	return (0);
}
