#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count_int = 0;
	unsigned long int current_num;
	unsigned long int exclusive_num = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current_num = exclusive_num >> j;
		if (current_num & 1)
			count_int++;
	}

	return (count_int);
}
