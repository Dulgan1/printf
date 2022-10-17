#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout output
 * @c: The character to print
 * Return: 1 On success
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */

int _putchar(char c)
{
	static char buf[1024];
	static int x;

	if (c == -1 || x >= 1024)
	{
		write(1, &buf, x);
		x = 0;
	}
	if (c != -1)
	{
		buf[x] = c;
		x++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout output
 * @str: pointer to the string to print to stdout output
 * Return: number of chars written
 */

int _puts(char *str)
{
	register int x;

	for (x = 0; str[x] != '\0'; x++)
		_putchar(str[x]);
	return (x);
}
