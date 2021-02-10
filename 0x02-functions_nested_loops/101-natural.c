#include <stdio.h>
/**
 * main - This program prints sum of all multiples 3 or 5 below 1024.
 *
 * Return: 0.
 */
int main(void)
{
	int n, s;

	for (n = 0 ; n <= 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			s = s + n;
	}
	printf(" %d ", s);
	printf('\n');
	return (0);
}
