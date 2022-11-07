#include "main.h"
/**
 * _puts - Function that prints a string, followed by a new line, to stdout
 *Return: void
**/

void _puts(char *str)
{
	if (*str == '\0')
		return;
	_puts(str + 1);
	_putchar(*str);
}
