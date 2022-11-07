#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: counter
 * @argv: command arguments
 * return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argc[0]);
	return (0);
}
