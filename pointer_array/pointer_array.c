#include <stdio.h>

int main(void) {
    
    char *pary[5]; // pointer+array
    int i;

    pary[0] = "hi";
    pary[1] = "i am";
    pary[2] = "a";
    pary[3] = "wierd";
    pary[4] = "person";

    for(i = 0 ; i < 5 ; i ++ ) {
        printf("%s ", pary[i]);// hi i am a wierd person

        // pary배열은 포인터를 담는 변수이고 각각 포인터의 값, 즉 (h, i, a, w, p)를 가리키지만
        // %s 출력시에는 연결하고 있는 문자 모두를 출력하게 된다.
    }

    printf("\n");
    for(i = 0 ; i < 5 ; i ++ ) {
        printf("%d ", *pary[i]); // 104 105 97 119 112
        
        // 포인터 배열의 주소값은 연속되지 않는다.
    }

    return 0;
}