#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void) {
    int sel;

    printf("choose one 1.add 2.multiply 3.max \n");
    scanf("%d", &sel);

    switch(sel) {
        case 1: func(sum); break; // func으로 감싸준다.
        case 2: func(mul); break;
        case 3: func(max); break;
    }

    return 0;
}

void func(int (*fp)(int, int)) {
    int a, b;
    int res;

    printf("input two int >> ");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("result >> %d\n", res);
}

int sum(int a, int b) {
    return (a + b);
}

int mul(int a, int b) {
    return (a * b);
}

int max(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}