#include "holberton.h"
/**
  * print_square - prints a square
  * @size: size of the square
  * Return: void
**/
void print_square(int size)
{
	int w;
	int h;

	if (size <= 0)
		_putchar('\n');
	else
	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
