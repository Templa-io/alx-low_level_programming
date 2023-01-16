#include "main.h"


char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int max_len = len1 > len2 ? len1 : len2;
    int carry = 0;
    int sum;
    if (size_r < max_len + 2) {
        return 0;
    }
    r[max_len + 1] = '\0';
    for (int i = 1; i <= max_len; i++) {
        int a = i <= len1 ? n1[len1 - i] - '0' : 0;
        int b = i <= len2 ? n2[len2 - i] - '0' : 0;
        sum = a + b + carry;
        carry = sum / 10;
        r[max_len - i] = sum % 10 + '0';
    }
    if (carry == 1) {
        r[0] = '1';
        return r;
    }
    return r + 1;
}
