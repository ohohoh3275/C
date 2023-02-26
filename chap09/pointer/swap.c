#include <stdio.h>

void swap(int *pa, int *pb);

int main(void) {

    int a = 10, b = 20;

    swap(&a, &b); // 주소값을 인자로 줬고 -> 17행에서는 포인터로 함수의 매개변수를 받았다.
                    // *pa = &a , *pb = &b 로 들어간다고 생각하면 된다.

    printf("a >> %d, b >> %d\n", a, b);

    return 0;
}

// ../double_pointer/swap.c에서 같은 함수 but 이중인 함수를 사용한다. 
void swap(int *pa, int *pb) {
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}


// bad case
// 안되는 경우
void badSwap(int x, int y);

int badMain(void) {
    
    int a = 10, b = 20;

    badSwap(a, b);
    // 41의 행에 대입하면 x = a, y = b로 되는데 메모리 할당이 아닌 copy가 되어 결과적으로 a, b의 변수의 값이 바뀌지는 않는다.

    printf("bad case a >> %d, b >> %d\n", a, b);

    return 0;
}

void badSwap(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
}