#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the first size.
 *
 * Return: lngth of string.
 */
int _strlen(char *s)
{
	int seize = 0;

	for (; *s++;)
	seize++;
	return (seize);
}
