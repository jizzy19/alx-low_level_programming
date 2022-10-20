#include "main.h"
/**
 * print_sign - Function that prints the sign of a number
 * Return: 1 and prints + if n is greater than zero,
 * prints 0 if n is zero, -1 and prints - if n is less than zero
 * @n: Number to check
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
		_putchar('-');
	return (-1);
}
