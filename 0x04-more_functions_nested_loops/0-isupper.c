#include "main.h"
/**
 * _isupper - Checks for uppercase character
 *
 * Return: 1 if c is uppercase, otherrwise 0
 * @c: Alphabet to check
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

