#include "dog.h"
/**
 * _strcpy - copies the string
 * @dest: Destiny
 * @src: source
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_infodog;

	new_infodog = malloc(sizeof(dog_t));
	if (new_infodog == NULL)
		return (NULL);

	(*new_infodog).name = malloc(sizeof(name) + 1);
	if ((*new_infodog).name == NULL)
	{
		free(new_infodog);
		return (NULL);
	}

	(*new_infodog).owner = malloc(sizeof(owner) + 1);
	if ((*new_infodog).owner == NULL)
	{
		free((*new_infodog).name);
		free(new_infodog);
		return (NULL);
	}

	_strcpy((*new_infodog).name, name);
	(*new_infodog).age = age;
	_strcpy((*new_infodog).owner, owner);

	return (new_infodog);
}
