#include "main.h"

/**
* print_rev -> prints a string in reverse
* @s: the string to be printed in reverse
*/

void print_rev(char *s)
{
	int i, l;

	l = 0;
	while (s[l] != '\0')
		l++;

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
