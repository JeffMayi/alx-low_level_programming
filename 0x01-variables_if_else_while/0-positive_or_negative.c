#include <stdlib.h>
#include <time.h>
/**
 * main - This is the main function
 * Return: Always 0
 */
/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
	printf("is positive", \n);
	}
	else if (n == 0)
	{
	prinft("is zero", \n);
	}
	
	else(n < 0)
	{
	printf("is negative", \n);
	}

	printf("\n");
	return (0);
}
