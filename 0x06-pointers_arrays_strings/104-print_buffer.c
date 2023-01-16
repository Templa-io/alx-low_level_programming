#include "main.h"



void print_buffer(char *b, int size) {
    if (size <= 0) {
        printf("\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        if (i % 10 == 0) {
            printf("%08x: ", i);
        }
        printf("%02x ", (unsigned char)b[i]);
        if (i % 2 == 1) {
            printf(" ");
        }
        if (b[i] >= 32 && b[i] <= 126) {
            printf("%c", b[i]);
        } else {
            printf(".");
        }
        if (i % 10 == 9) {
            printf("\n");
        }
    }
    if (size % 10 != 0) {
        printf("\n");
    }
}
