#include "variadic_functions.h"
/**
  * sum_them_all - returns the sum of all its parameters
  * @n: number of parameters
  * Return: the sum of all the parameters
**/
int sum_them_all(const unsigned int n, ...)
{
	va_list addition;
	unsigned int token, sum;
	if (n == 0)
		return (0);

	va_start(addition, n);
	sum = 0;
	for (token = 0; token < n; token++)
		sum += va_arg(addition, int);
	va_end(addition);
	return (sum);
}
