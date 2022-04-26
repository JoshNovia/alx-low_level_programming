#include "main.h"

/**
 * _strspn - search for a string in a set of bytes
 * @s: source of string
 * @accept: accepts a string
 *
 * Return: number of bytes in the last segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}
	return (t);
}
