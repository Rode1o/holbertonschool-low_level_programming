
#include "holberton.h"
/**
  * print_diagonal - draws a diagonal line on the terminal
  *@n: number of times the character \ is printed
  * Return: void
**/
void print_diagonal(int n)
{
	int l;
	int c;

	if (n <= 0)
		_putchar('\n');
	for (l = 0; l < n; l++)
	{
		if (l > 0)
		{
			for (c = 0; c < l; c++)
			{
				putchar(' ');
			}
			putchar(92);
		}
		else
		putchar(92);
		putchar('\n');
	}
}
