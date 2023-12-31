#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing information about a dog.
 * @name: Name of the dog (string).
 * @age: Age of the dog (float).
 * @owner: Owner's name (string).
 *
 * Description: This structure holds information about a dog,
 * including its name, age, and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */


