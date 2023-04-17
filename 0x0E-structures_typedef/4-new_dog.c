#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - prints the length of a string
 * @s: The string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 * _strcpy - Copies a string from source to
 * destination.
 * @src: Source string
 * @dest: Destination string
 * Return: Resulting string
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr1;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	ptr1 = malloc(sizeof(dog_t));
	if (ptr1 == NULL)
		return (NULL);
	ptr1->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr1->name == NULL)
	{
		free(ptr1);
		return (NULL);
	}
	ptr1->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ptr1->owner == NULL)
	{
		free(ptr1->owner);
		free(ptr1);
		return (NULL);
	}
	ptr1->name = _strcpy(ptr1->name, name);
	ptr1->age = age;
	ptr1->owner = _strcpy(ptr1->owner, owner);
	return (ptr1);
}
