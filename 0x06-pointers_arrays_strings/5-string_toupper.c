#include "main.h"
/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *str)
{
	 char *ptr = str;
	 
	 while (*ptr)
	 {
		 if (*ptr >= 'a' && *ptr <= 'z')
		 {
			 *ptr = *ptr - 'a' + 'A';
		 }
		 ptr++;
	 }
	 return (str);
}

