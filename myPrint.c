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
	int i = 0, j = 0, c = 0;
	char *myString;
	char myChar;


	va_start(arglist, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					myChar = va_arg(arglist, int);
					_putchar(myChar);
					c++;
					break;
				case 's':
					myString = va_arg(arglist, char *);
					while (myString[j])
					{
						_putchar(myString[j]);
						j++;
						c++;
					}
					break;
				default:
					break;

			}
			i += 2;
			continue;
		}
		_putchar(format[i]);
		i++;
		c++;
	}
	return (c);
}
