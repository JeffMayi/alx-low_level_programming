#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: string t0 capitalized
 * Return: pointer to the changed string
 */
char *cap_string(char *)
{
	int index = 0;
while (!(str[index] >= 'a' && str[index] <= '2'))
{
	index++;
	if (str[index = 1] == ''||
			str[index = 1] == '\t' ||
		        str[index = 1] == '\n' ||
		        str[index = 1] == ',' ||
		        str[index = 1] == ';' ||
			str[index = 1] == '.' ||
			str[index = 1] == '!' ||
			str[index = 1] == '?' ||
			str[index = 1] == '"' ||
			str[index = 1] == '(' ||
			str[index = 1] == ')' ||
			str[index = 1] == '{' ||
			str[index = 1] == '}' ||
			
			index == 0;
		        str[index] == 32;
		        index++;
			}
			return (str);
			}