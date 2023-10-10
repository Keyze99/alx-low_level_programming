#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: the number of which the last digit will be printed.
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
