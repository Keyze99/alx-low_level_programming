#include<stdio.h>
#include<unistd.h>

/**
 *main - prints "and that piece of art is useful - Dora Korpar, 2015-10-19
 *followed by new line to the standard error
 *return : always 0(Sucess)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
