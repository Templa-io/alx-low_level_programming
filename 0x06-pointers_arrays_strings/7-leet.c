#include "main.h"

char *leet(char *str) {
    int i,j;
    char letters[26] = {'a','e','o','t','l','A','E','O','T','L'};
    char leet[26] = {'4','3','0','7','1','4','3','0','7','1'};
    for (i = 0; str[i]; i++) {
        for (j = 0; j < 10; j++) {
            if (str[i] == letters[j]) {
                str[i] = leet[j];
                break;
            }
        }
    }
    return str;
}
