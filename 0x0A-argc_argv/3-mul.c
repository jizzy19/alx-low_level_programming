#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point
  * @argc: Argurment count
  * @argv: Arguement vector
  * Return: one
  */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	mul = i * j;

	printf("%d\n", mul);

	return (0);
}
