#include "main.h"

char *string_toupper(char *str) {
    int i;
    for (i = 0; str[i]; i++) { //iterate through the string 
        if (str[i] >= 'a' && str[i] <= 'z') { // check if the character is lowercase
            str[i] -= 32; // subtract 32 from the ASCII value to convert to uppercase
        }
    }
    return str;
