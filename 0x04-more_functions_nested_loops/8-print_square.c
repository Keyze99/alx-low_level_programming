#include "main.h"

/**
 * print_square - prints a square of size n
 * @n: size of the square
 *
 * Return: void
 */


void print_square(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
