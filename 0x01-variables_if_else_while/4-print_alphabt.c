#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet except e and q
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'a')
	{
		if (ch == 'e' || ch == 'q')
		ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
