#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char c)
{
	int i, j;

	char 1[] = "a4eEo0tT1L";
	char 2[] = "4433007711";
	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
