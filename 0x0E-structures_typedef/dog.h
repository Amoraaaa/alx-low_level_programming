#include <stdio.h>

/**
 * struct dog - a new type
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 *
 * Description: Longer description
 *
 * Return: return (0)
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
