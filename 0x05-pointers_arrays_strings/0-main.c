#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;

	c = 402;
	printf("c=%d\n", c);
	reset_to_98(&c);
	printf("c=%d\n", c,);
	return (0);
}

