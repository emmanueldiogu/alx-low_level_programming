#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _isDigit - checks if input is int
 * @s: check param
 * Return: 0
 */
int _isDigit(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

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

	for (i = 1; i < argc; i++)
	{
		input = strtol(argv[i], NULL, 10);
		if (_isDigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		result += input;
	}

	printf("%d\n", result);

	return (0);
}
