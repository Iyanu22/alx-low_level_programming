#include "main.h"
/**
 *  _puts - rints a string, followed by a new line
 *
 *  Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
