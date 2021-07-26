#include "holberton.h"

/**
 * p_char - prints out a character
 * @ap: argument parameter to the character expected
 * Return: 0
 */
void p_char(va_list ap)
{
	_putchar(va_args(ap, char));
}

/**
 * p_str - prints out a string
 * @ap: argument parameter to the expected string
 * Return: 0
 */
int p_str(va_list ap)
{
	int i;
	char *str;

	str = va_args(ap, char *);
	if (str == NULL)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * p_perc - skips % and prints next character
 * @ap: the character received
 * Return: Void
 */
void p_perc(va_list ap)
{
	int i;
	char *str;

	str = va_args(ap, char *);
	if (str == NULL)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		++str;
		_putchar(str[i]);
	}
}
