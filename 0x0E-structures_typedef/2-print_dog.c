#include "dog.h"
#include <stdio.h>
/**
 * print_dog - return dog details
 * @d:pointer to d
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == 0 || d->owner == NULL)
		printf("nil");
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d)
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s", d->owner);
	}
	if (d == NULL)
	{
		printf("");
	}
}
