#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: first parameter
 * @letters: second parameter
 *
 * Description - reads a file
 * Return: Number of letters on success, -1 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	ssize_t rcount, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	d = open(filename, O_RDWR);
	if (d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rcount = read(d, buffer, letters);
	if (rcount == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buffer);

	close(d);
	return (wcount);
}
