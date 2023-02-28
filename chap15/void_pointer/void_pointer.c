#include <stdio.h>

int main(void) {
    int a = 10;
    double b = 4.5;
    void *vp; // void pointer : [형태가 정해지지 않은 변수]의 포인터  Object같은 ..

    vp = &a;
    printf("a >> %d\n", *(int *)vp); // casting 해줌

    vp = &b;
    printf("b >> %.1lf\n", *(double *)vp);

    return 0;
}