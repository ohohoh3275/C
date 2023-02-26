#include <stdio.h>

int main(void) {

    int ary[3];
    int *pa = ary; // 이때 ary[0]의 값을 '저장'하는 것일 뿐 *(pa + 1)은 ary에서 (int)의 값만큼 한칸 더해진 ary[1]을 반환한다.
    int i;

    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];

    for(i = 0 ; i < 3 ; i ++ ) {
        printf("%5d", pa[i]); // 10 20 30
    }

    return 0;
}