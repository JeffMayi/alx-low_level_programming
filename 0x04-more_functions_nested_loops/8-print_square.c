#include "main.h"

/**
 * print_square - Print a square of '#' characters on the terminal
 * @size: The size of the square
 */
void print_square(int size)
{
	int row, col;
	
	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (row = 0; row < size; row++)
	{
        for (col = 0; col < size; col++)
        {
		putchar('#');
        }
	putchar('\n');
	}
}

	
