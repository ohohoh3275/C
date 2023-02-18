#include <stdio.h>

int main(void) {

    int *p;
    p = (int *) 100; // 100번지에 대입하고 싶을 때 int* 형 변수로 형변환해 대입해주면된다.
    *p = 10;

    return 0;
}