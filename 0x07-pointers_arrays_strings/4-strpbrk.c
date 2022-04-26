#include "main.h"

/**
 * _strpbrk - searches for a string in any sef of bytes
 * @s: source string
 * @accepts: accepts a character
 *
 * Return: returns the string source, the first found acceptable character
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}
	return ('\0');
}
