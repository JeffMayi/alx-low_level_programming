#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encode a string using ROT13
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the resulting encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";
   	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
    	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
	
	while (*ptr)
	{
		char *pos_upper = strchr(alpha_upper, *ptr);
        	char *pos_lower = strchr(alpha_lower, *ptr);
		
		if (pos_upper != NULL)
		{
			*ptr = rot13_upper[pos_upper - alpha_upper];
		}
		else if (pos_lower != NULL)
		{
			*ptr = rot13_lower[pos_lower - alpha_lower];
		}
		
		ptr++;
	}
       
	return str;
}

