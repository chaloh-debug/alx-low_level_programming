#include <stdio.h>

/**
 * main- Entry point
 *
 * find size of data types
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %lu\n",sizeof(char));
	printf("Size of an int: %lu\n",sizeof(int));
	printf("Size of a long int: %lu\n",sizeof(long int));
	printf("Size of a long long int: %lu\n",sizeof(long long int));
	printf("Size of a float: %lu\n",sizeof(float));
	return (0);
}
