#include "main.h"
/**
 * _isalpha - check if lower case
 * @c : character to check the cases
 *
 * Return: returns 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
