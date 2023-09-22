#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalize all words in a string
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	char *ptr = str;
    	bool new_word = true;
	
	while (*ptr)
	{
		if (new_word && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr -= 32;
			new_word = false;
		}
		else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' ||
                 		*ptr == '(' || *ptr == ')' || *ptr == '{' ||
                 		*ptr == '}')
		{
			new_word = true;
		}
		else
		{
			new_word = false;
		}
		ptr++;
	}
	return str;
}

