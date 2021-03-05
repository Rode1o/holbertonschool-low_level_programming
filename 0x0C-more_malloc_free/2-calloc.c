#include "holberton.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elemts of the array
 * @size: size of bytes for the array
 * Return: return a pointer or NULL if any variable is 0 or if malloc fails
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int token;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (token = 0; token < (nmemb * size); token++)
		arr[token] = 0;

	return (arr);
}
