#include "main.h"
/**
 * main - main Entry.
 * Description: prints 1 to 100,
 * for multiples of 3, print "Fizz",
 * for multiple of 5 print "Buzz", else prints "FizzBuzz",
 *
 * Return: void.
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
	if (i % 3 == 0)
	printf("Fizz");
	else if (i % 5 == 0)
	printf("Buzz");
	else if (i % 15 == 0)
	printf("FizzBuzz");
	else
	printf("%i", i);
	if (i < 100)
	printf(" ");
	}
	printf('\n');
	return (0);
}
