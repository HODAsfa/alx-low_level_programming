#include <stdio.h>

/**
 * main - entry point
 *
 * Descriotion: print all alphapet letters
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
