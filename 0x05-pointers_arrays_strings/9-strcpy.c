#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - main function.
 * @src: The source.
 * @dest: The destination.
 *
 * Description: This function copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
