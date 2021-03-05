#include "holberton.h"
/**
  * string_nconcat - concatenates two strings
  * @s1: is the first string
  * @s2: is the second string
  * @n: is the number of characters to copy of the @s2
  * Return: return a pointer to the allocated memory
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, j;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len = 0; s1[len]; len++)
	{}

	for (i = 0; s2[i]; i++)
	{}
	if (n >= i)
		n = i;

	con = malloc((len + n + 1) * sizeof(char));
	if (con == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		con[i] = s1[i];
	j = i;
	for (i = 0; i < n; i++, j++)
		con[j] = s2[i];
	con[j] = '\0';
	return (con);
}
