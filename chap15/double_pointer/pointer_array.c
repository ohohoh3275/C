#include <stdio.h>

void print_str(char **pps, int cnt);

int main(void) {

    char *daily_life[] = {"work", "workout", "study"};
    int count;

    count = sizeof(daily_life) / sizeof(daily_life[0]);
    print_str(daily_life, count); // 2. 파라미터는 포인터 변수가 아닌 배열의 값이 된다.

    return 0;
}

void print_str(char **pps, int cnt) { // 1. 이중 포인터를 매개변수로 받으면
    int i;

    for(i = 0 ; i < cnt ; i++) {
        printf("%s\n", pps[i]); // 이중포인터를 배열명처럼 사용
    }
}