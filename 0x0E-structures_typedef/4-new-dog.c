#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - this function creates a new dog.
 *
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nameLength, ownerLength;

	nameLength = _strlen(dog->name);
	ownerLength = _strlen(dog->owner);

	dog = malloc(sizeof(dog));
	if (dog == NULL)
		retrun(NULL);
	dog->name = malloc(sizeof(char) * (nameLength + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ownerLength + 1));
	if (dog->owner ==NULL)
	{
		free(dog);
		free(dog->name);
		return(NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
