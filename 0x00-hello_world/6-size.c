/*
 * File: 6-size.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the size of various types based on 
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("Sizeof a char: %zu byte(s)\n", sizeof(char));
	printf("Sizeof a int: %zu byte(s)\n", sizeof(int));
	printf("Sizeof a long int: %zu byte(s)\n", sizeof(long int));
        printf("Sizeof a long long int: %zu byte(s)\n", sizeof(long long int));
        printf("Sizeof a float: %zu byte(s)\n", sizeof(float));

	return (0);
}	
