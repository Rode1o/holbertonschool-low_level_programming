#include "holberton.h"
/**
  * malloc_checked - allocates memory using malloc
  * @b: size of the memory to allocate
  * Return: void pointer to allocated memory
**/
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
