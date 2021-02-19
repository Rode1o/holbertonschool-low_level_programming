#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13.
 *
 * @s: String.
 *
 * Return: String in rot13.
 */

char *rot13(char *s)
{
	int i, j;
	char r1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char r2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; r1[j] != '\0'; j++)
		{
			if (s[i] == r1[j])
			{
				s[i] = r2[j];
				break;
			}
		}
	}
	return (s);
}
