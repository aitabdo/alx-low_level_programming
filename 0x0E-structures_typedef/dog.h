#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defining a dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
