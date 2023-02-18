#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints lowercase alphabets in reverse
 * followed by a new line
 * has to follow the betty style
 * Return: Always 0 (Success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);
	putchar('\n');

	return (0);
}
