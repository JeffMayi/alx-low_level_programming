#include "main.h"

/**
 * infinite_add - Add two positive numbers represented as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: Pointer to the result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0;
	int sum, index_r;
	
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	r[size_r - 1] = '\0';
	index_r = size_r - 2;
	while (index_r >= 0 && (len1 > 0 || len2 > 0 || carry > 0))
	{
		int digit1 = 0, digit2 = 0;

		if (len1 > 0)
		{
			digit1 = n1[len1 - 1] - '0';
			len1--;
		}
		if (len2 > 0)
		{
			digit2 = n2[len2 - 1] - '0';
			len2--;
		}
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[index_r] = (sum % 10) + '0';
		index_r--;
	}
	if (index_r < 0 && (len1 > 0 || len2 > 0 || carry > 0))
		return (0);
	return (r + index_r + 1);
}

