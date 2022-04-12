#include "main.h"
/**
 * print_last_digit - returns last digit
 * @n : the num to check
 *
 * Return: returns 0 or 1
 */
int print_last_digit(int n)
{
	int nn;

	if (n < 0)
		nn = -1 * (n % 10);
	else
		nn = n % 10;
	_putchar(nn + '0');
	return (nn);
}
