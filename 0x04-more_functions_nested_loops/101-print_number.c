#include "main.h"
/**
 * print_number - that prints an integer
 * @n: interger to be printed
 * Return: void
 */
void print_number(int n)
{
	_unsigned int n1;
	if (n < 0)
	{
		n1 = -n;
		_putchar('_');
	}
	else
	{
		n1 = n;
		_putchar('_');
		if (n1 / 10)
		{
			print_number(n1 / 10);
		}
		_putchar((n1 % 10) + '0');
	}
}
