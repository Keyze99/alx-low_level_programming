#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to check
 * Return: length of the string
 */

int _strlen(char *s)
{
	int l = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		l++;
	return (l);
}
