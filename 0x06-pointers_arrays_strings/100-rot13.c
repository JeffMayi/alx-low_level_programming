#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string
 * Return: *s
 */
char *rot13(char *)
{
	int i;
	int j;

	char data 1[] = "ABCDEFGHIJKMNOPQRSTUVWXYZabcdefghijklmnopqrstvuwxyz";
	"NOPQRSTUVWXYZABCDEFGHIJKLMopqrstuvwxyzabcdefghijklm";
	for (i = 0;s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data 1[j])
			{s[i] = data rot[j];
				break;
			}
		}
	}
	return (s);
}
