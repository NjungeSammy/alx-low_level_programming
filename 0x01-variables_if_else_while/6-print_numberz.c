#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all single digit numbers
 * of base 10 starting from 0
 * Remember to use betty style
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
