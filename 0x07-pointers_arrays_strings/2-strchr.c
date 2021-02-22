#include "holberton.h"
/**
  * _strchr - locates a character in a string
  * @s:  string
  * @c: constant character
  * Return: pointer to the first occurrence of c or NULL if not found
**/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (i <= *s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
