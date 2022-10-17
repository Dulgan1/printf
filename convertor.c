#include "main.h"

/**
 * convert: number and base converter intostring
 * @num: input number
 * @base: input base
 * @lowercase: if need to be lowercase, flag
 * Return: resulting string
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
