#include "holberton.h"

/**
 * print_diagsums - Sum of the two diagonals of a square matrix of integers.
 *
 * @a: Array.
 * @size: Size of array.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0, sum2 = 0;

	for (; i < size; i++)
	{
		sum1 = sum1 + *(a + ((size + 1) * i));
	}

	for (i = size; i > 0; i--)
	{
		sum2 = sum2 + *(a + ((size - 1) * i));
	}

	printf("%d, %d\n", sum1, sum2);
}
