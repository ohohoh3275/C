#include <stdio.h>

int main(void) {
    int a = 10, b = 20;
    const int *pa = &a; // [포인터로 사용되는 변수] pa에 a의 주소를 대입

    printf("a >> %d\n", *pa); // pa가 가리키는 변수(a)를 출력
    pa = &b; // [포인터로 사용되는 변수] pa에 b의 주소를 대입
    printf("b >> %d\n", *pa); // pa가 가리키는 변수(b)를 출력
    pa = &a; // [포사변] pa에 a 주소를 대입
    a = 20; // a에 20을 대입

    // *pa = 20; --> 이건안됨 const로 선언해서
    printf("a >> %d\n", *pa); // 20

    return 0;
}