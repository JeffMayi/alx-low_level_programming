#include "main.h"
/**
 * print_line - draw straight line in terminal
 * @n: number of times the character_ should be printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
