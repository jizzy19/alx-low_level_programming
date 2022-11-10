#include <stdlib.h>
#include "main.h"

/**
* create_array - Function that creates an array of chars, and initializes it with a specific char. 
* @ch: A pointer to the array
* @size: Size of the array 
* @c: Initialize char
*/

char *create_array(unsigned int size, char c)
{

	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)

		ch[i] = c;

	return (ch);
}
