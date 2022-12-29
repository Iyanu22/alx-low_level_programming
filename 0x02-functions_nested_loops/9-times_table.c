#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int times, num, result;
	for (times = 0; times <= 9; times++)
	{
	for (num = 0; num <= 9; num++)
	{
	_putchar(',');
	_putchar(' ');
	result = times * num;
	_putchar(result  + '0');
	_putchar('\n');
	}
	}
}
