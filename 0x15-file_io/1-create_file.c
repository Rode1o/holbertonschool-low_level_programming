#include "holberton.h"

/**
 * create_file - function to create a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 for success and -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t op, we;
	int rc = 0;		/* to read the string */

	if (!filename)
		return (-1);
	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (op == EOF)
		return (-1);
	/* reading the string */
	while (!text_content)
	{
		for (; text_content[rc]; rc++)
			;
	}

	we = write(op, text_content, rc);
	if (we == EOF)
		return (-1);
	close(op);
	return (1);
}
