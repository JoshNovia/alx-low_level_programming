#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, follewd by a new lin to stdout.
 *
 * @str: pointer
 */

void _puts(char *str)
{
	for(; *str != '\0'; str++)
	{
		_putchar(*str);
	}
		_putchar('\n');
}
