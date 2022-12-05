#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Returns: On succes 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
