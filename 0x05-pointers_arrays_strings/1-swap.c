#include <stdio.h>

/**
 * swamp_int - swamps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */

void swamp_int(int *a, int *b)
/* the function that swamps the values of the two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
