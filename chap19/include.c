#include <stdio.h>
#include "student.h" // include를 쓰면 파일의 내용이 복사된 것과 같다.

int main(void) {
    st student = { 1234, "ohoh" };
    printf("name : %s | number : %d\n", student.name, student.num);

    #include "myfile.c"; // 30 출력됨. myfile.c파일이 import된것

    return 0;
}