#include "variadic_functions.h"
/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: , and whitespace
  * @n: number of integers passed to the function
  * Return: void
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int token;
	va_list num;

	token = 0;
	if (separator == NULL)
		separator = "";
	va_start(num, n);
	while (token < n)
	{
		if (i == (n - 1))
			printf("%d", va_arg(num, int));
		else
			printf("%d%s", va_arg(num, int), separator);
		token++;
}
	printf("\n");

	va_end(sum);
}
