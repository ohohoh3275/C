#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char name[10];
    int age;
    double height;
    char* greeting;
};

int main(void) {
    struct person jy;

    strcpy(jy.name, "wus");
    jy.age = 30; // ㅠ
    jy.height = 170;

    jy.greeting = (char* )malloc(100); // 꼭 메모리 할당을 먼저 하고 
    jy.greeting = "how are ya"; // 문자열을 연결한다.

    printf("name : %s\n", jy.name);
    printf("age : %d\n", jy.age);
    printf("greeting : %s\n", jy.greeting);

    return 0;
}