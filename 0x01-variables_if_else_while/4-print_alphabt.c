#include <stdio.h>
/**
 * main  - start point
 *
 * exceptions
 *
 * return 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z';i !='q,e')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
