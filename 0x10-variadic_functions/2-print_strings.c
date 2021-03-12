#include "variadic_functions.h"
/**
  * print_strings - prints strings
  * @separator: string to be printed between the strings
  * @n: number of strings passed to the function
  * Return: void
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int token = 0;
	va_list lstr;
	char *str;

	if (separator == NULL)
		separator = "";
	va_start(lstr, n);
	while (token < n)
	{	str = va_arg(lstr, char*);
	if (str == NULL)
		str = "(nil)";
	if (token == (n - 1))
		printf("%s", str);
	else
		printf("%s%s", str, separator);
	token++;
	}
	printf("\n");

	va_end(lstr);
}
