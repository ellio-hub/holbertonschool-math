#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - main function
 * @c: complex number
 *
 * Return: nothing
 */

void display_complex_number(complex c)
{
	char x = '+';
	double im = c.im;

	if (c.re != 0 && c.im < 0)
	{
		x = '-';
		im = im * -1;
	}
	if (c.re * c.im != 0)
	{
		printf("%g %c %gi\n", c.re, x, im);
	}
	else if (c.re != 0)
	{
		printf("%g\n", c.re);
	}
	else if (c.im != 0)
	{
		printf("%gi\n", c.im);
	}

}
