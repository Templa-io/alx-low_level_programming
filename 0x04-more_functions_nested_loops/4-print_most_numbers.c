#include "main.h"

/*
 * print_most_numbers -  a function that prints the numbers, from 0-9, \n line.
 * @void: input
 * Return: return numbers but 2 and 4
 */

void print_most_numbers(void)
{
	int ch = '0';


	while (ch <= '9')
	{
		if ((ch != '2') && (ch != '4'))
		{
				_putchar(ch);
		}
		 ch++;

	}
	_putchar('\n');
}

