#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character
 * Return: 1 if c is a lowercase or uppercase otherwise 0
 * @c:  alphabet to check
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
