#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contains some info of a dog
 * @name: Name of the dog
 * @owner: Owner of the dog
 * @age: Dog's age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner)

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

void free_dog(dog_t *d);

#endif /* DOG_H */
