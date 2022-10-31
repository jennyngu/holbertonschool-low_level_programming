#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - contains description of a dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
