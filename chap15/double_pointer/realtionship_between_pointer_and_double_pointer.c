#include <stdio.h>

int main(void) {
    
    int a = 10;
    int *pi;
    int **ppi; // double pointer

    pi = &a;
    ppi = &pi;

    printf("a 변수값 : %10d\n", a);
    printf("a의 &연산 : %10u\n",&a);
    printf("pi의 변수값 : %10u\n", pi);
    printf("pi의 &연산 : %10u\n", &pi);
    printf("pi의 *연산 %10d\n", *pi);
    printf("ppi의 변수값 : %10u\n", ppi);
    printf("ppi의 &연산 : %10u\n", &ppi);
    printf("ppi의 *연산 %10u\n", *ppi);
    printf("ppi의 **연산 : %10u\n", **ppi);

    // int **ppi; 에서 두 별은 다른 의미를 가진다.
    // int* * ppi;로 보면 됨


    return 0; 

}