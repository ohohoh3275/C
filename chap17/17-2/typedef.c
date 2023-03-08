#include <stdio.h>

struct student {
    int num;
    double grade;
};

typedef struct student st; // 여기서 typedef로 student구조체를 st로 재정의함
typedef struct student {
    int num;
    double grade;
} s; // 원래는 요런 형태지만 { }부분 같다면 생략 가능

void print_data(st *ps);

int main(void) {
    st s1 = { 123, 4.3 };
    print_data(&s1);
    return 0;
};

void print_data(st *ps) {
    printf("num %d\n", ps -> num);
    printf("grade %.1f\n", ps -> grade);
}