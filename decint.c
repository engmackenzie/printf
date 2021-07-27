#include "holberton.h"
#include <stdarg.h>
#define MAX 100

/**
 * p_int - handles the d specifier
 * @ap: arg pointer to decimal
 * Return: no of char printed
 */

int p_int(va_list ap)
{
	int x, len = 0, j, i = 0, temp;
	int digits[MAX];

	x = va_arg(ap, int);
	if (!x)
	{
		_putchar('\n');
		return (1);
	}
	if (x <= 9)
	{
		_putchar(x % 10);
		len++;
	}
	else
	{
		/*add individual digits to an array*/
		while (x != 0)
		{
			temp = x % 10;
			digits[i] = temp;
			i++;
			x = x / 10;
		}
		/*print digits from above array*/
		len = 0;
		for (j = i - 1; j > -1; j--)
		{
			_putchar(digits[j]);
			len += 1;
		}
	}
	return (len);
}
