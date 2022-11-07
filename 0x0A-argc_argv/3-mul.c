#include <stdio.h>

/**
 * main - multiplies two numbers.
 * argc: count
 * argv: argument
 * Return: mul
 */

int main(int argc, int argv[])
{
	int mul;

	mul = argc[0] * argc[1];
	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		return (mul);
}
