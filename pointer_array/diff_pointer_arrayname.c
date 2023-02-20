#include <stdio.h>

int main(void) {
    int ary[3] = {10, 20, 30};
    int *pa = ary;
    int i;

    for(i = 0 ; i < 3; i ++ ) {
        printf("%d ", *pa); //10 20 30 
        pa++;
    }

    printf("\n");
    for(i = 0 ; i < 3; i ++ ) {
        printf("%d ", ++(*pa)); // 2 3 4 
    }

    printf("\n");

    int array[5] = {10, 20, 30, 40, 50};
    int *px = array;
    int *py = px + 3;

    printf("py - px : %u\n", py - px);


    // 블록의 크기 == 자료형의 크기이므로 int포인터를 쓰면 4byte씩 움직인다.
    // 따라서 요소들간의 차이를 구할때는 (큰값-작은값)/블록의 크기로 구하면 된다.

    return 0;
}