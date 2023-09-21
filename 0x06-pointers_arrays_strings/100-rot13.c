#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string
 * Return: *s
 */
char *rot13(char *str)
{
	int i;
	int j;

	char str[i] = "ABCDEFGHIJKMNOPQRSTUVWXYZabcdefghijklmnopqrstvuwxyz";
	"NOPQRSTUVWXYZABCDEFGHIJKLMopqrstuvwxyzabcdefghijklm";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data 1[j])
			{
				str[i] = data rot[j];
				break;
			}
		}
	}
	return (str);
}
