#include "holberton.h"

/**
 * create_file - main function
 * @filename: The pointer name of the file.
 * @text_content: The string.
 *
 * Description: This function creates a file.
 *
 * Return: 1 on success, -1 on failure.
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
	if (text_content != NULL)
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
