#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-This is the main function
 * Return: Always 0
 */
/* more headers goes there */

/* betty style doc for function main goes there */
	int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d\n",  "positive");
	}
	else if (n < 0)
	{
	print("%d\n",  "negative");
	}
	else
	{
	printf("%d\n",  "zero");
	}
	return 0;
}
