#include <stdio.h>

struct student
{
    int num; // 학번
    double grade; // 학점
};

int main(void) {

    struct student s1;
    
    s1.num = 2;
    s1.grade = 2.7;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1f\n", s1.grade);

    return 0;
}

// struct는 class같은 것인가?!
// struct에서 멤버변수들의 크기가 다르면 맞춰주기 위한
// **padding byte** 를 넣어 가지런하게 정렬하여 메모리 할당을 한다.
// student struct에서 int(4bytes), double(8bytes)를 선언했지만
// 8bytes + 8bytes(최대값) = 16bytes가 된다.

