#include "variadic_functions.h"
/**
  * print_all - prints anything
  * @format: list of tyoes of arguments passed to the function
  * Return: void
**/
void print_all(const char * const format, ...)
{
	unsigned int token = 0;
	va_list any;
	char *s, c;
	int i;
	float f;

	va_start(any, format);
	while (format != NULL && format[token] != '\0')
	{
		switch (format[token++])
		{
		case 'c':
			c = (char) va_arg(any, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(any, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(any, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(any, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			continue;
		}
		if (format[token] != '\0')
			printf(", ");
	}
	va_end(any);
	printf("\n");
}
