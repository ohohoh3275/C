#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    char temp[80];
    char *str[3];
    int i;

    for(i = 0 ; i < 3 ; i++) {
        printf("문자열 입력 >>> ");
        gets(temp); // scanf같은것, gcc로 생성할 때 warning이 발생할 수 있다.
        str[i] = (char *)malloc(strlen(temp) + 1); // 문자열 저장공간 malloc
        strcpy(str[i], temp); // 복사하는 것.
    }

    for(i = 0 ; i < 3 ; i++) {
        printf("%s\n", str[i]); // 입력된 문자 출력
    }

    for(i = 0 ; i < 3; i++) {
        free(str[i]);
    }

    return 0;
}