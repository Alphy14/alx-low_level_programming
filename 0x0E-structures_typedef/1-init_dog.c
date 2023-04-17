#include "main.h"
/**
 * init_dog - initializes a variable
 * of type struct dog.
 * @d: pointer to the variable struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
