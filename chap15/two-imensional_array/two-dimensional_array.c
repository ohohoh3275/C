#include <stdio.h>

int main(void) {
    int ary[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int (*pa)[4]; // [포인터 변수] 인데 int형 변수를 4개 가리킬 수 있는 것
    int i, j;

    pa = ary; // 여기서 할당 들어가고
    for(i = 0 ; i < 3 ; i ++ ) {
        for (j = 0 ; j < 3 ; j ++ ) {
            printf("%5d", pa[i][j]); // 여기서 가리키는 값을 출력하는 용오로 사용한다. 
            // 4개만 가리킬 수 있던 *pa는 어떻게 i와 j를 분리할 수 있었나? 
            // 포인터는 2차원이 아니라도 2차원배열을 출력할 수 있다...
            // 이 부분을 이해하려면 
            // *(*(ary + 1) + 2) 가 ary[1][2] 처럼 사용된다는 것을 이해해야한다.
        }
        printf("\n");
    }

    return 0;
}