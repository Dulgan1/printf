
abela12
/
printf
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
printf/print_rev.c
@Robel-Ak
Robel-Ak Create print_rev.c
 1 contributor
25 lines (24 sloc)  382 Bytes
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
*print_rev - prints astring in reverse
*@r: string to print
*Return: number of chars printed
*/
int print_rev(va_list r)
{
	char *st;
	int t, p = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (t = 0; str[t] != '\0'; t++)
		;
	for (t -= 1 ; t >= 0; t--)
	{
		_putchar(str[t]);
		p++;
	}
	return (p);
}
