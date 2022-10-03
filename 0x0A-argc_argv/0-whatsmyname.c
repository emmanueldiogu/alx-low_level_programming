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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
