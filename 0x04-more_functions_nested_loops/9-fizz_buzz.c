#include <stdio.h>

/**
 * main - print 0 to 100
 * Return: 0
 */

int main(void)
{
	int i;
	
	for (i = 0; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
