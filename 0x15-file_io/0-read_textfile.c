#include "holberton.h"
/**
 * read_textfile - reads a text file and prints deppending
 * on letters
 * @filename: name of the file (av[1])
 * @letters: numbers of characters to be printed
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, we;
	char *buffer;

	if (!filename)/* filename == NULL */
		return (0);
	op = open(filename, O_RDONLY);
	if (op == EOF)	/* EOF's value is -1*/
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	re = read(op, buffer, letters);

	if (re == EOF)
	{
		free(buffer);
		return (0);
	}

	we = write(STDOUT_FILENO, buffer, re);
	if (we == EOF)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);	/* Open & close must be have fcntl.h, lib */
	return (re);
}
