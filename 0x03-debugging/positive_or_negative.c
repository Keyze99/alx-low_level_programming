#include "main.h"
#include<stdio.h>

/**
 * positive_or_negative - tests a number to see if it's positive or negative.
 * @num: the number to be tested.
 */
void positive_or_negative(int num)
{
	int n;
	n=num;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
}
