#include <stdio.h>

int main(void) {

    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char address size >> %d\n", sizeof(&ch));
    printf("int address size >> %d\n", sizeof(&in));
    printf("double address size >> %d\n", sizeof(&db));

    printf("char pointer size >> %d\n", sizeof(pc));
    printf("int pointer size >> %d\n", sizeof(pi));
    printf("double pointer size >> %d\n", sizeof(pd));
    
    printf("char pointer pointing variable size >> %d\n", sizeof(*pc));
    printf("int pointer pointing variable size >> %d\n", sizeof(*pi));
    printf("double pointer pointing variable size >> %d\n", sizeof(*pd));

    // 주소 크기와 포인터 크기가 책에서는 4로 나오는데
    // 실제로 찍어보면 8로 나온다. 
    // sizeofpointer.c:23:61: warning: format specifies type 'int' but the argument has type 'unsigned long' [-Wformat] 이 경고 관련일것 같음

    return 0;
}