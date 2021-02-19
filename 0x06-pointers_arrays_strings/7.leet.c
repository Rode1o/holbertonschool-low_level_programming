#include "holberton.h"

/**
 * leet - Encodes a string into 1337.
 *
 * @s: String.
 *
 * Return: String in 1337.
 */

char *leet(char *s)
{
	int i, j;
	char l[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
