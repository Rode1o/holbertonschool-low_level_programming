#include <stdio.h>

/**
 * main - This program print the numbers from 0 to 9.
 *
 * Return: 0.
 */

int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
