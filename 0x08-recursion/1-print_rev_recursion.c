#include "main.h"


void _print_rev_recursion(char *s)
{


 /*Base case: check if it end of string and print new line character */
    if (*s == '\0'){
      _putchar('\n');
    }
    else
    {
      /* print the next character */
      _print_rev_recursion(++s);
      /* print the current character */
      _putchar(*s);
    }

  /* print character (*) then I will print *s++ */
/* I want to print *s++ before I print s */



}
