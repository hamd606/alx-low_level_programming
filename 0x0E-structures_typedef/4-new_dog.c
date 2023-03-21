#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * new_dog - creates a dog struct
  * @name: name
  * @age : age
  * @owner: owner
  * Return: pointer to the created struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
		return (NULL);

	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;

	return (mydog);
}
