#include <stdio.h>

int sum(int, int);

int main(void) {
    int (*fp)(int, int); // [함수포인터]를 선언한 것 
                        // [함수포인터]는 [함수]를 가리키는 변수
    int res;

    fp = sum;
    res = fp(10, 20);
    printf(" result >> %d\n", res);

    return 0;
}

int sum(int a, int b) {
    return (a+b);
}