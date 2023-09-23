#include "main.h"
/**
 * main - program that prints the alphabetic in loweercase
 * Return: always 0
 */
void print_alphabet(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
