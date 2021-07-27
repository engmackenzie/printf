#include "holberton.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * p_char - prints out a character
 * @ap: argument parameter to the character expected
 * Return: number of charcters printed
 */
int p_char(va_list ap)
{
	int len = 0;

	_putchar(va_arg(ap, int));
	len += 1;

	return (len);
}

/**
 * p_str - prints out a string
 * @ap: argument parameter to the expected string
 * Return: number of charcters printed
 */
int p_str(va_list ap)
{
	int i, len = 0;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}

/**
 * ascii_hex - prints ascii value in uppercase hex notation
 * @i: char to be printed.
 *
 * Return: no. of chars printed.
 */
int ascii_hex(char i)
{
	int len = 0;
	char arr[2];

	arr[0] = i / 16;
	arr[1] = i % 16;

	while (len < 2)
	{
		arr[len] >= 10 ? _putchar(arr[len] + '0' + 'A' - ':') :
			_putchar(arr[len] + '0');
		len++;

	}
	return (len);
}

/**
 * p_S - prints a string and non-printable chars;
 * @ap: string to be printed.
 *
 * Return: no. of chars printed.
 */
int p_S(va_list ap)
{
	unsigned int n = 0;
	int len = 0;
	char *S = va_arg(ap, char *);

	if (!S)
		S = "(null)";
	while (S[n])
	{
		if (S[n] < 32 || S[n] > 126)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			len += ascii_hex(S[n]);
		}
		else
		{
			_putchar(S[n]);
			len++;
		}
		n++;
	}
	return (len);
}

