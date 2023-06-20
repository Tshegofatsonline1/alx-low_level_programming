#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function that initializes a variable type for struct dog
 * @d: A dog structure
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 * Description: initializes a variable type for struct dog
 * return:0(always)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->owner = owner;
d->age = age;
}
}
