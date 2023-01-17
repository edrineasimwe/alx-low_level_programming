#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure for basic dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dogs's owner
 * Description: data structures for dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
