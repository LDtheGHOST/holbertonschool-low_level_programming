#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - makes a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: Pointer to dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int i;
char *ptr;

if (name == 0 || owner == 0)
return (NULL);
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

for (i = 1, ptr = name; *ptr; i++)
ptr++;
d->name = malloc(i);
if (d->name == 0)
{
free(d);
return (NULL);
}


for (i = 1, ptr = owner; *ptr; i++)
ptr++;
d->owner = malloc(i);
if (d->owner == 0)
{
free(d->name);
free(d);
return (NULL);
}

for (i = 0; *name != 0; i++, name++)
d->name[i] = *name;
d->name[i] = 0;
for (i = 0; *owner != 0; i++)
d->owner[i] = *owner++;
d->owner[i] = 0;
d->age = age;

return (d);
}
