#include "holberton.h"
/**
  * _strspn - gets the lenght of a prefix substring
  * @s: string 1
  * @accept: string 2
  * Return: number of bytes in the initial segment of s
**/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes += 1;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (bytes);
}
