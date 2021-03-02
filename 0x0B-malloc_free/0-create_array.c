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
	char *ar = (char *)malloc(size);

	if (size == 0)
		return (0);
	if (size <= 0 || ar == NULL)
		return (NULL);
	for (unsigned int token = 0; token < size; token++)
		ar[token] = c;
	return (ar);
}
