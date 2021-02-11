#include "holberton.h"

/**
 * print_most_numbers - main function.
 *
 * Description: This function print the numbers from 1 to 9
 * without including the number 2.
 * Return: none.
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)

	{
		if (n == '2' && n == '4')
		{
			_putchar (n);
		}
	}
	_putchar ('\n');
}
