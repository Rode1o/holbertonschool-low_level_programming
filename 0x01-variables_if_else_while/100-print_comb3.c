#include <stdio.h>

/**
 * main - This program prints all possible different combinations
 * of two digits.
 *
 * Return: 0.
 */

int main(void)
{
int d = '0';
int r;

while (d <= '9')
{
for (r = '0'; r <= '9'; r++)
{
if (d < r)
{
putchar(d);
putchar(r);

if (d != '8' || r != '9')
{
putchar(',');
putchar(' ');
}
}
}
d++;
}
putchar('\n');
return (0);
}
