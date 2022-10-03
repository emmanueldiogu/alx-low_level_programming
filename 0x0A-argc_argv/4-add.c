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

	i = 1;
	result = 0;

	if (argc <= 1)
	{
		printf("%d\n", result);
		return (1);
	}

	while (i < argc)
	{
		input = strtol(argv[i], NULL, 10);
		result += input;
		i++;
	}
	printf("%d\n", result);

	return (0);
}
