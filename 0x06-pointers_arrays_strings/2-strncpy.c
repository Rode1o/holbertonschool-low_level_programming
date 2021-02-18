#include "holberton.h"
/**
  * _strncpy - Concatenates two strings
  * @dest: destination string
  * @src: source string
  * @n: number of characters
  * Return: a pointer to the resulting string dest
**/
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}
