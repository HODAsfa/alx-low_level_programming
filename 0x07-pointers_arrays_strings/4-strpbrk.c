#include "main.h"
/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: if a set is matched - a pointer to the matched byte.
 * if no set is matched - NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] !=  '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
		j++;
	}
	i++;

	return (0);
}
