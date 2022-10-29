#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0, if the s1 and s2 are equal
 * a negative value if s1 is less than s2
 * a positive value if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int flag = 0;

	while (flag == 0)
	{
		if (s1[i] > s2[i])
			flag = 1;
		else if (s1[i] < s2[i])
			flag = -1;
		if (s1[i] == '\0')
			break;
		i++;
	}
	return flag;
}
