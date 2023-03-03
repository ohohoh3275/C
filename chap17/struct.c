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
