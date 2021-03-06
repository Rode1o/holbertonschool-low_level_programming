#include "holberton.h"

/**
 * main - main program.
 * @argc: The number of arguments.
 * @argv: Each argument.
 * Description: This program copies the content of a file to another file.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t readBuff;
	char buf[BUFFER];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC |
		       O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	while ((readBuff = read(file_from, buf, BUFFER)) > 0)
		if (file_to == EOF || readBuff != write(file_to, buf, readBuff))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
		}
	if (readBuff == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	if (close(file_from) == EOF)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == EOF)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);

}
