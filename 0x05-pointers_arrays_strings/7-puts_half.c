#include "main.h"
/**
 * strlen - function that prints half of a string
 * @s: string
 * Return: length
 */
int strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
