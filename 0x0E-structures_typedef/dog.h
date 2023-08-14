#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct that define dog properties.
 *
 * @name: hold name
 * @age: hold value of age
 * @owner: hold the dog owner name
 *
 * Description:
 * The struct represent a dog attributes.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
