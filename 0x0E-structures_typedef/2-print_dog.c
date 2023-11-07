#include "dog.h"
#include <stdio.h>
/**
 * print_dog - return dog details
 * @d:pointer to d
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil");
	if (d->name == NULL)
		printf("Name: (nil)");
	else
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s", d->owner);
	}
}
