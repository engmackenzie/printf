#include <unistd.h>

/**
 * _putchar - prints a character c to the stdout.
 * @c: character to printed to the stdout.
 *
 * Return: 1 on success or -1 on error.
 */

void _putchar(char c)
{
	return (write(1, &c, 1));
}
