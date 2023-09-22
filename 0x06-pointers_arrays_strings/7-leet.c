#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char c)
{
	char *ptr = str;
   	char *leet_chars = "aAeEoOtTlL";
    	char *leet_replacements = "443370711";
	
	while (*ptr)
	{
		int i = 0;
        	int is_leet = 0;
		while (leet_chars[i])
		{
			if (*ptr == leet_chars[i])
				*ptr = leet_replacements[i];
			is_leet = 1;
			break;
		}
		i++;
	}
	if (!is_leet)
	{
		ptr++;
	}
	return (str);
}
