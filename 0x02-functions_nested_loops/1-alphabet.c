#include "main.h"
/**
 * main - main Entry.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	
	_putchar(alpha);
	
	_putchar('\n');
}
int main(void)
{

	print_alphabet();
	return (0);
}
