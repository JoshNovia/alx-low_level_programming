#include "main.h"
/**
 * swap_int - swap the variables of a and b
 *
 * @a: pointer b
 * @b: ponter a
 */

void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
