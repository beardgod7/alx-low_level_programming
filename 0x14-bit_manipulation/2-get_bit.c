#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @n: the bit to return
 * @index: the index to get the value at - starts at 0
 *
 * Return: -1 if error else, value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
