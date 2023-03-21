#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * init_dog - initializes dog struct
  * @d: struct pointer
  * @name: name
  * @age : age
  * @owner: owner
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
