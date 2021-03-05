#include "holberton.h"

/**
 * array_range - creates a array of integers
 * @min: minimal number
 * @max: maximum number
 * Return: return the pointer or NULL if any variable is 0 or if malloc fails
**/
int *array_range(int min, int max)
{
	int *arr, token1, token2;

	if (min > max)
		return (NULL);

	token2 = (max - min) + 1;

	arr = malloc(token2 * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (token1 = 0; token1 < token2; token1++)
		arr[token1] = min + token1;

	return (arr);
}
