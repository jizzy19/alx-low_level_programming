#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: The string
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
