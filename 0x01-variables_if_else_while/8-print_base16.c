#include <stdio.h>
/**
 * main - prints hexadecimal
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char hex;

	for (num = 0; num <= 10; num++)
	putchar((num % 10) + '0');

	for (hex = 'a'; hex <= 'f'; hex++)
	putchar(hex);

	putchar('\n');

	return (0);
}
