#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define character of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Characteristic: This define the character a dog possess.
 */

struct dog
{

	char *name;
	float age;
	char *owner;

};

typedef  struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
