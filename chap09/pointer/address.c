#include <stdio.h>

int main(void) {

    int a;
    double b;
    char c;

    printf("a address >> %u\n", &a); // 1840869432 ~ 1840869435 ( 4 bytes )
    printf("b address >> %u\n", &b); // 1840869424 ~ 1840869431 ( 8 bytes )
    printf("c address >> %u\n", &c); // 1840869423 ( 1byte )

    return 0;
}