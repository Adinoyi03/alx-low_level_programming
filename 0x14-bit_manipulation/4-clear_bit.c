#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index.
 * @n: pointer of type unsigned long int.
 * @index: index of the bit to modify.
 * Return: 1 if it worked, -1 if an erorr occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int left_shift;

	if (index > 64)
	{
		return (-1);
	}

	left_shift = 1 << index;

	if (*n & left_shift)
	{
		*n ^= left_shift;
	}

	return (1);
	
}
