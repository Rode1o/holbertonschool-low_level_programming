#ifndef DOG_H_
#define DOG_H_
#include <stdio.h>
#include <stdlib.h>
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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
