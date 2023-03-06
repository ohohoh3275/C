#include <stdio.h>

struct person {
    int age;
    double height;
};

struct student {
    struct person person; // 책에서는 변수명을 줄여서 쓰는 경우가 많다(예: ps) c언어의 관습인가?
    int id;
    double grade;
};

int main(void) {
    struct student jy;

    jy.person.age = 20; // 그냥 클래스 같은뎁!!?
    jy.person.height = 168.73;
    jy.id = 20130000;
    jy.grade = 3.3; // ;;

    printf("age : %d\n", jy.person.age);
    printf("height : %1lf\n", jy.person.height);
    printf("grade : %.1lf\n", jy.grade);

    return 0;
}