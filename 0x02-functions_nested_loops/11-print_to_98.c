#include "holberton.h"
/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: integer
  * Return: void
**/
void print_to_98(int n)
{

if (n > 98)
{
for (; n > 97; n--)
{
printf("%d", n);
if (n == 98)
break;
printf(", ");
}
}
else if (n < 98)
{
for (; n < 99; n++)
{
printf("%d", n);
if (n == 98)
break;
printf(", ");
}
}
else
printf("%d", 98);
printf("\n");
}
