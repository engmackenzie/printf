#include "holberton.h"

/**
 * int p_binary - prints an int int binary
 * @ap: the int to be printed
 *
 * Return: number of chars printed.
 */

int p_binary(va_list ap)
{
	unsigned int n, arr[33], len = 0;
	int i = 0;

	n = va_arg(ap, unsigned int);
	
	if (!n)
		i++;	
	while (n > 0)
	{
		arr[i] = n % 2;
		n /= 2;
		i++;
	}
	i--;

	while (i >= 0)
	{
		_putchar(arr[i] + '0');
		i--;
		len++;
	}

	return (len);
}

