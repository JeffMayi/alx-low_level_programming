#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest:copy to
 * @src: copy to
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + 1) != '\0')
	{
		y++;
	}
	for (; x < y; x++)
	{
		dest[x] = src[x];
		return (dest);
	}
	dest[y] = '\0';
	return (dest);
}
