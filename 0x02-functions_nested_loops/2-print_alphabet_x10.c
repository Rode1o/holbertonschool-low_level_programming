#include "holberton.h"
/**
* print_alphabet_x10 - print alphabet in lowercase x10
*
*Return: void
*/
void print_alphabet_x10(void)
{

int a;
int b;
for (a = 0; a <= 9; a++)
{
for (b = 97; b <= 122; b++)
{_putchar (b);
}
_putchar('\n');
}
}
