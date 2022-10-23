
#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers, from 0-9, followed by a \n.
 * @void:
 * Return: numbers but 2 and 4
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}

