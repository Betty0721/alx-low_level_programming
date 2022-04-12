#include "main.h"

/**
 * main- program for printing output
 *
 * Return: returns a 0
 * Description: printing __putchar
 */
int main(void)
{
	int i = 0;
	char c[8] = "_putchar";

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
