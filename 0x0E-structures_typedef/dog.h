#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - information about dogs
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int putchar(char);

typedef struct dog my_dog;

#endif /* _DOG_H_ */
