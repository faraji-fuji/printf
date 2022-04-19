#include "main.h"

/**
 * _putint - print integers and decimals.
 *
 * @n: Number to print.
 *
 * Return: Zero.
 */

void _putint(int n)
{
	/* declare and initialize j */
	int z = 1, nb = n, d, na;

	/*print zero if int is zero*/
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* find the number of decimal places*/
	while (nb > 0)
	{
		nb = nb / 10;
		z = z * 10;
	}
	/* reduce the zeroes by one. */
	z = z / 10;
	/* chop each digit, using modulus and integer division*/
	/*  and write to the standard output */
	while (z >= 1)
	{
		na = n;
		d = (na / z) % 10;
		z = z / 10;
		_putchar(d + 48);
	}
}
