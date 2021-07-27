#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct id_func - Struct id_func
 *
 * @id: identifier.
 * @f: corresponding function.
 */
typedef struct id_func
{
	char *id;
	int (*f)(va_list);
} id_f;

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list c);
int p_str(va_list s);
int p_int(va_list ap);
#endif
