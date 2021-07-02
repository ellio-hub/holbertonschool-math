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
	if (c.re * c.im != 0)
	{
		printf("%g + %gi\n", c.re, c.im);
	}
	else if (c.re == 0)
	{
		printf("%gi\n", c.im);
	}
	else if (c.im == 0)
	{
		printf("%g\n", c.re);
	}

}
