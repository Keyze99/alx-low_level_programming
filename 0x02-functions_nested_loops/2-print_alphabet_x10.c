#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase
 * followed by a new line 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		i++;
		_putchar('\n');
	}
}
