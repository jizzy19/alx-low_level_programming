#include "main.h"
/**
 * _isdigit - Function that checks for a digit
 *
 * Return: 1 if c is a digit otherwise 0
 * @c: Digit to check
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
