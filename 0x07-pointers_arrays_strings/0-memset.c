#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting adress
 * @b: desired value
 * @n: nimber of btyes to be changed
 * Return: changed array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++, n++)
	{
		s[i] = b;
	}

	return (s);

}
