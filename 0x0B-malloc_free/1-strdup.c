
#include "holberton.h"
/**
  * _strdup - returns a pointer to a newly allocated
  * space in memory, which cointains a copy of the string
  * given as a parameter
  * @str: string coming
  * Return: NULL if str is NULL or insufficient memory was available
  * or pointer to the duplicated string
**/
char *_strdup(char *str)
{
	int i, j;
	char *duplicated;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{}

	duplicated = (char *)malloc((i + 1) * sizeof(char));

	if (duplicated == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		duplicated[j] = str[j];
	}

	return (duplicated);
}
