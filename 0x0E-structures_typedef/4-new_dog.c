#include "dog.h"
#include <stdlib.h>


int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
/**
 * new_dog - this fuction creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int nameLength = 0, ownLength = 0;

	if (name != NULL && owner != NULL)
	{
		nameLength = _strlen(name) + 1;
		ownLength = _strlen(owner) + 1;
		doggo = malloc(sizeof(dog_t));

		if (doggo == NULL)
			return (NULL);

		doggo->name = malloc(sizeof(char) * nameLength);

		if (doggo->name == NULL)
		{
			free(doggo);
			return (NULL);
		}

		doggo->owner = malloc(sizeof(char) * ownLength);

		if (doggo->owner == NULL)
		{
			free(doggo->name);
			free(doggo);
			return (NULL);
		}

		doggo->name = _strcpy(doggo->name, name);
		doggo->owner = _strcpy(doggo->owner, owner);
		doggo->age = age;
	}

	return (doggo);
}

