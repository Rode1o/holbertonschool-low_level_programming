#include "holberton.h"
/**
*_memset - fill the first @n bytes of the memory area pointed by @s.
*@s: Apointer ti the memory area to be filled.
*@b: The character to fill the memory are with.
*@n: The number of bytes to be filled
*Return: conc with 2 strngs
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
}
