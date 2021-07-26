#include "holberton.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - produces output according to a format.
 * @format: character string.
 *
 * Return: the number of characters printed (excluding the null byte used to
 * end the output to strings.
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, j;
	id_f identf[] = {
		{"c", p_char},
		{"s", p_str},
		{NULL, NULL}
	};
	va_list ap;
	va_start(api, format);

	va_end(ap);

}
