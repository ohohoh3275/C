#include <stdio.h>

union student {
    int num;
    double grade;
};

int main(void) {
    union student s1 = { 123 };
    printf("num and grade ?? %d %.1f \n", s1.num, s1.grade); // 123 0.0
    // 첫번째 변수인 s1만 할당되고, 만약 grade를 초기화 하고싶다면
    union student a = { .grade = 4.0 };
    printf("num and grade ?? %d %.1f \n", a.num, a.grade); // 이렇게 하면 된다. // 0 4.0


    s1.grade = 4.1;
    printf("grade ? %.1f\n", s1.grade); // 4.1
    printf("num ?? %d\n", s1.num); // 1717986918

    // union 공용체 변수는 int : 4bytes, double 8bytes일때
    // 전체 8바이트의 공간을 [같이]사용한다.
    // 메모리를 절약할 수 있지만, 다른 멤버에 의해 값이 변할 수 있으므로 항상 확인해줘야함~~

    return 0;
}