#include "holberton.h"
/**
 * print_number - prints any number with putchar
 * @n: number to print
 * Return: numbers
 */
void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
		number = n;
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}