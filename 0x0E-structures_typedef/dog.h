#ifndef DOG_H_
#define DOG_H_
#include <stdio.h>

/**
  * struct dog - data type to save dogs basic data
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
**/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
