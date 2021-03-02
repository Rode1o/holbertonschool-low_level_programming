#include "holberton.h"
/**
  * create_array - creates an array of chars, and initializes it
  * with a specific char.
  * @size: size of the string
  * @c: specific char
  * Return: NULL if size 0 or malloc fails
  * or pointer to the array if success
**/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(size * (sizeof(char)));

	if (str == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}
