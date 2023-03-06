#include <stdio.h>

struct student {
    int id;
    char name[10];
    double grade;
};

int main(void) {
    struct student 
                    s1 = { 1, "학생1", 1.2},
                    s2 = { 2, "학생2", 3.3},
                    s3 = { 3, "학생3", 2.3};

    struct student max;

    max = s1;

    if(s2.grade > max.grade) {
        max = s2;
    }

    if(s3.grade > max.grade) {
        max = s3;
    }

    // 학점이 제일 높은 student
    printf("max 학번 : %d\n", max.id);
    printf("max 이름 : %s\n", max.name);
    printf("max 학점 : %.1lf\n", max.grade);

    return 0;
}