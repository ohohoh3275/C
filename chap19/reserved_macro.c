#include <stdio.h>

void func(void);

int main(void) {
    printf("compile datetime ; %s, %s \n\n", __DATE__, __TIME__); // 오 파이썬같음
    printf("file name : %s\n", __FILE__); // reserved_macro.c
    printf("function name : %s\n", __FUNCTION__); // main
    printf("line number : %d\n", __LINE__); // 9

#line 100 "macro.c"
    func();

    return 0;
}

void func(void) {
    printf("\n");
    printf("file name : %s\n", __FILE__); //macro.c
    printf("function name : %s\n", __FUNCTION__); //func
    printf("line number : %d\n", __LINE__); // line number 109

}