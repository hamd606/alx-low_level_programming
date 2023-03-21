#ifndef DOG_H
#define DOG_H

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}dog_t;

/**
 * struct dog - a dog :)
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif


