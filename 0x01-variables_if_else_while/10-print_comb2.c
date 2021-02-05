#include <stdio.h>

/**
 * main - This program prints the numbers from 00 to 99.
 *
 * Return: 0.
 */

int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		int r = '0';

		while (r <= '9')
		{
			putchar(d);
			putchar(r);

			if (d != '9' || r != '9')
			{
				putchar(',');
				putchar(' ');
			}
			r++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
