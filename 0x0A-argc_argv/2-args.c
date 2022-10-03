#include <stdio.h>
#include <string.h>

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
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	(void)argv;

	return (0);
}
