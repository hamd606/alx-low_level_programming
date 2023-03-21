#ifndef DOG_H
#define DOG_H

/**
  * struct dog_t - a dog
  * @name : name
  * @age : age
  * @owner : owner
  */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * struct dog - a dog :)
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif
