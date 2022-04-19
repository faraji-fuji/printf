#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format.
 *
 * @format: format specification.
 *
 * Return: the number of characters printed (excluding the null byte used to
 * end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list arglist;
	int i = 0, j = 0;
	char *myString;

	va_start(arglist, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(arglist, int));
					break;
				case 's':
					myString = va_arg(arglist, char *);
					while (myString[j])
					{
						_putchar(myString[j]);
						j++;
					}
					break;
				case 'd':
					_putint(va_arg(arglist, int));
					break;
				case 'i':
					_putint(va_arg(arglist, int));
					break;
				default:
					break;
			}
			i += 2;
			continue;
		}
		_putchar(format[i]);
		i++;
	}
	return (0);
}
