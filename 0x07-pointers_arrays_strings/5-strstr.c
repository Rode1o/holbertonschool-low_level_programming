#include "holberton.h"
/**
  * _strstr - function that locates a substring
  * @haystack: main string
  * @needle: substring
  * Return: pointer to the beginning of substring or NULL
  * if not found
**/
char *_strstr(char *haystack, char *needle)
{
	char *a, *c;

	while (*haystack)
	{
		c = haystack;
		a = needle;
		while (*a == *haystack && *a)
		{
			haystack++, a++;
		}
		if (*a == '\0')
			return (c);
		haystack = c + 1;
	}
	return (0);
}
