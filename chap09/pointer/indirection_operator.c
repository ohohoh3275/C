#include <stdio.h>

int main(void) {

    int a = 10, b = 15, total; // int 변수 선언 || 초기화, 메모리 할당됨
    double avg; // double 변수 선언 메모리 할당
    int *pa, *pb; // [포인터로 사용되는 변수] 선언
    int *pt = &total; // [포인터로 사용되는 변수] pt에 total의 주소를 대입
    double *pg = &avg; // [포인터로 사용되는 변수] pg에 avg의 주소를 대입

    pa = &a; // [포인터로 사용되는 변수] pa에 a의 주소를 대입
    pb = &b; // [포인터로 사용되는 변수] pb에 b의 주소를 대입

    *pt = *pa + *pb; // pt가 가리키는 변수 = pa가 가리키는 변수 + pb가 가리키는 변수
    *pg = *pt / 2.0; // pg가 가리키는 변수 = (pt가 가리키는 변수) / 2.0

    printf("int a, b >> %d %d\n", a, b);
    printf("int a + b >> %d\n", *pt);
    printf("a, b average >> %d\n", *pg);


    return 0;
}