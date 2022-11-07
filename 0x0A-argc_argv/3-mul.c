#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * argc: count
 * argv: argument
 * Return: mul
 */

int main(int argc, char argv[])
{
	int mul;

	mul = atoi(argc[1]) * atoi(argc[2]);
	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", mul);
		return (0);
}
