#include "main.h"
/**
 * _islower - Function that checks for lowercase character
 * Return: 1 if it is lowercase, else 0
 * @c: letter to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
