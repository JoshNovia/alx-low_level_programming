#include "main.h"

/**
 * puts_half - prints half a string.
 *
 * @str: pointer
 */

void puts_half(char *str)
{

int i, last;

i = 0;
while (str[i] != '\0')
{
i++;
}
last = (i +1) /2;

for (i = last; str[i]; i++)
}
