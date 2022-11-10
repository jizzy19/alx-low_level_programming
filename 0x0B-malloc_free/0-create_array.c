#include <stdlib.h>
#include "main.h"

/**
* create_array - Function that creates an array of chars
* @size: Size of the array
* @c: Initialize char
* Return: A pointer or Null
*/

char *create_array(unsigned int size, char c)
{

	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(char) * size);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)

		ch[i] = c;

	return (ch);
}
