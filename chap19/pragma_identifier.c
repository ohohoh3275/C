#include <stdio.h>
#pragma pack(push, 1) // pragma를 쓰면 컴파잉ㄹ러의 컴파일방법을 세부적으로 제어할 수 있다. 

typedef struct {
    char ch;
    int in;
} sample1;

#pragma pack(pop)

typedef struct {
    char ch;
    int in;
} sample2;

int main(void) {
    printf("sample1 struct size : %d bytes \n", sizeof(sample1));
    printf("sample2 struct size : %d bytes \n", sizeof(sample2));

    return 0;
}