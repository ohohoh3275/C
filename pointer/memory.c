#include <stdio.h>

int main(void) {
    
    int a; // 선언과 동시에 n부터 n+4(4bytes)까지 a가 할당된다.

    a = 10; // n부터 n+4의 메모리 공간에 10을 저장한다.

    printf("%d", a); // 메모리 n ~ n+4의 공간(=10)을 프린트한다.  

    return 0;
}