#include "main.h"
/**
 * _isupper - uppercase
 * @c: char to check
 * Return: 0 or 1 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'a') && (c <= 'Z'))
	return (1);
	else
	return (0);
}
