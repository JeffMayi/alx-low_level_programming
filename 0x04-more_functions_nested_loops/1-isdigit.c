#include "main.h"
/**
 * _isdigit -check if the number are 0 or 9
 * @c: car to be checked
 * Return: always 0 or 9
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
