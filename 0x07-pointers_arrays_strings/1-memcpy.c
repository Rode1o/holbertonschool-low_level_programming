#include "holberton.h"
/**
  * _memcpy - Copies memory area
  * @dest: destination string
  * @src: source string
  * @n: bytes from memory area
  * Return: pointer to dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
