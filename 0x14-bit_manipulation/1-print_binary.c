#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int m, count_int = 0;
	unsigned long int current_num;

	for (m = 63; m >= 0; m--)
	{
		current_num = n >> m;

		if (current_num & 1)
		{
			_putchar('1');
			count_int++;
		}
		else if (count_int)
			_putchar('0');
	}
	if (!count_int)
		_putchar('0');
}
