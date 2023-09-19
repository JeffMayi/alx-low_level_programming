#include "main.h"
/**
 * more_numbers - print more numbers
 * Return: void
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <=  10; i++)
	for (j = 0; j <= 14; j++)
	{
	if (j > 10)
	putchar('i');
	putchar(j % 10 + '0');
	putchar('\n');
	}
}
