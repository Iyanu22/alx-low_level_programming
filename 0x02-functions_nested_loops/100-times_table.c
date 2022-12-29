#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n - number to be multiplied.
 */
void print_times_table(int n)
{
	int result, num;

	for (n = 0; n <= 15; n++)
	{
	_putchar('0');
	for (num = 0; num <= 15; num++)
	{
	_putchar(',');
	_putchar(' ');
	result = n * num;
	if (result <= 15)
	_putchar(' ');
	else
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	}
	_putchar('\n');
	}
}
