#include "holberton.h"
#include <stdarg.h>

/**
 * p_char - prints out a character
 * @ap: argument parameter to the character expected
 * Return: number of charcters printed
 */
int p_char(va_list ap)
{
	int len = 0;
	_putchar(va_args(ap, char));
	len += 1;

	return(len);
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

	str = va_args(ap, char *);
	if (str == NULL)
	{
		_putchar('\n');
		return (1);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}

/**
 * p_perc - skips % and prints next character
 * @ap: the character received
 * Return: number of charcters printed
 */
int p_perc(va_list ap)
{
	int i, len = 0;
	char *str;

	str = va_args(ap, char *);
	if (str == NULL)
	{
		_putchar('\n');
		return (1);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		/*check if next character is %*/
		/*print %*/
		if (str[i + 1] == '%')
		{
			_putchar(str[i + 1]);
		}
		/*else check if the next character is a conversion specifier*/
		else
			_printf(str[i + 1]);
		len++;
	}
	return (len);
}
