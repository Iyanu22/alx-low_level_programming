#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: The charater ti be checked.
 *
 * Return: 1 if true, 0 if false. 
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	return (1);
	else
	return (0);
}
