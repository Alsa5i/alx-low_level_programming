#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type dog
 * @d: is a pointer to the structure
 * @name: name element
 * @age: age element
 * @owner: owner element
 *
 * Return: nothing	
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
