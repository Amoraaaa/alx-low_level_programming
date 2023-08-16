#ifndef DOG_H /* Include guard */
#define DOG_H

#include <stdio.h>
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);









#endif
