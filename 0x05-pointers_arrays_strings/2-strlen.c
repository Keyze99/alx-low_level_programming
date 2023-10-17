#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to check
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	for (int i = 0; s[i] != '\0'; i++)
		length++;
	return length;
}
