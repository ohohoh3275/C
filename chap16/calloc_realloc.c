#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pi;
    int size = 5;
    int count = 0;
    int num;
    int i;

    pi = (int *)calloc(size, sizeof(int)); // size가 5, 5만큼의 저장공간 할당

    while(1) {

        printf("양수만 입력하세요 >> ");
        scanf("%d", &num);
        
        if(num <= 0) {
            break;
        }
        
        if(count == size) { // 5만큼 초과했을 때 5씩 추가
            size += 5;
            pi = (int *)realloc(pi, size * sizeof(int)); // 다시 저장공간 할당하기 realloc
        }
 
        pi[count++] = num; // count ++ 해주고 num할당
    }

    for(i = 0 ; i < count; i++ ) {
        printf("%5d", pi[i]);
    }

    free(pi);

    return 0;
}