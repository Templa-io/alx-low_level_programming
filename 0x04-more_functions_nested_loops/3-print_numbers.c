#include "main.h"
#include <stdio.h>

/**
  * print_numbers -  a function that prints the numbers, from 0-9, followed by a \n.
  * @void:
  * Return: 0
  */

void print_numbers(void)
{
 char ch = '0';
  
    while (ch <= '9')
    {
                putchar(ch);
                ch++;
    }
            putchar('\n');
}
