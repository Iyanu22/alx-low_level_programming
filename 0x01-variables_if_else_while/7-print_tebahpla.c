#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse order.
 *
 * Return: Always 0.
 */
int main(void)
{
	char small;
	for (small = 'z'; small >= 'a'; small--)
	putchar(small);
	putchar('\n');

	return (0);
}
