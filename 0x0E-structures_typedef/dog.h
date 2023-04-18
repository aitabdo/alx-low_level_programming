#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a struct for my dog
 * @name: dog name
 * @age: dog age
 * @owner: owner dog name
 *
 * Description: description for my struct goes here !
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for my struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
