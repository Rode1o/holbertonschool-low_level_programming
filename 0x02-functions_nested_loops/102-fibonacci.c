#include <stdio.h>
/**
 * main - This program prints Holberton, followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	int a = 1, b = 2, c, i;
	for (i = 1; i <= 50; i++)
	{
		printf("%u\n", a);
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
