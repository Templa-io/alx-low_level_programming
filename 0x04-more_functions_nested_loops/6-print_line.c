#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: input number of times to print '_'
 * Return: _ a straight line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
}
