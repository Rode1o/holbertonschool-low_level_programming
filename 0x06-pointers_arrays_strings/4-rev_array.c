#include "holberton.h"

/**
 * reverse_array - main function.
 * @a: Pointer to integrers.
 * @n: Number of elements of the array.
 *
 * Description: This function reverses the content of an array of integers.
 *
 * Return: None.
 */

void reverse_array(int *a, int n)
{
	int i, b, e;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		b = a[i];
		e = a[n];

		a[i] = e;
		a[n] = b;
		n--;
	}
}
