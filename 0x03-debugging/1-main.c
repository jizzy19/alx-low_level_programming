#include <stdio.h>

/**
 * main - cause and infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/* don't delete it! */
	while (i < 10)
	{
		putchar(i);
	}

	printf("Iinfinite loop avoided! \\o/\n");

	return (0);
}
