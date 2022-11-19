#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: arg count.
 * @argv: arg vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, size;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < size; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != size - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
