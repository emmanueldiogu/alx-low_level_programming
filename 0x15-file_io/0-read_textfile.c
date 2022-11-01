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

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

d = open(filename, O_RDONLY);
rcount = read(d, buffer, letters);
wcount = write(STDOUT_FILENO, buffer, rcount);

if (d == -1 || rcount == -1 || wcount == -1 || wcount != rcount)
{
free(buffer);
return (0);
}

free(buffer);
close(d);

return (wcount);
}
