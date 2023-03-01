#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *pi;
    int i, sum = 0;

    pi = (int *) malloc(5*sizeof (int));
    if(pi == NULL) {
        printf("메모리가 부족합니다~!\n");
        exit(1);
    }

    printf("나이를 5번 입력하세요 >>>");
    for(i = 0; i < 5; i++ ){
        scanf("%d", &pi[i]); // scanf를 사용할 때는 vscode에서 실행이 안됨 (터미널에서해야함)
        sum += pi[i];
    }

    printf("평균 나이 >>> %.1lf\n", (sum / 5.0));
    free(pi);

    return 0;


}
