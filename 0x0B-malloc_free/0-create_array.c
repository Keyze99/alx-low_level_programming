#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initialzes it with a specific char
 * @size: size of the array to be created
 * @c: char to initialize the array with
 *
 * Return: pointer to the array (success), NULL (error)
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	a = (char *) malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		*(a + i) = c;
		i++;
	}
	*(a + i) = '\0';
	return (a);
}
