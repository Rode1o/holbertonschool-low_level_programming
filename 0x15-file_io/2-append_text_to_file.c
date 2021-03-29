#include "holberton.h"

/**
 * append_text_to_file - main function.
 * @filename: The pointer name of the file.
 * @text_content: The string.
 *
 * Description: This function appends text at the end of a file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, we;
	int rc = 0; 		/* to read the string */

	op = open(filename, O_WRONLY | O_APPEND); /* flag O_APPEND ,ADD TEXT AT THE END OF A FILE */
	if (op == EOF)
		return (-1);
	if (!text_content)  	/* text_content == NULL */
		return (1);
	for (;text_content[rc]; rc++)/* Reading the string */
		;
	
	we = write(op, text_content, rc);
	if (we == EOF)
		return (-1);

	close(op);
	return (1);
}
