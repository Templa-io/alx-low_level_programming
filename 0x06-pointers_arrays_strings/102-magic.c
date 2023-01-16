#include "main.h"

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;
    printf("a[2] = %d\n", *(p + 2));
    printf("a[2] = %d\n",*(2+p));
    return 0;
}
