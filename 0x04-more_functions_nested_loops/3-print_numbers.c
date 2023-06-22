#include "main.h"

/**
 * print_numbers - prints 0 -9
 * only using putchar
 *
 * Return: Always 0 (success)
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
