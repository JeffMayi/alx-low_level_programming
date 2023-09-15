#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character that prints
 *
 * Return: 0n success
 */
int _putchar(char c)
{
	return (write((1, &c, 1)));
}
