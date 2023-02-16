#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *pi;
    double *pd;

    pi = (int *) malloc(sizeof (int));
    if(pi == NULL) {
        printf(" 메모리 부족함");
        exit(1);
    }

    pd = (double *) malloc(sizeof (double ));
    *pi = 10;
    *pd = 3.4;

    printf("정수형 : %d\n", *pi);
    printf("실수형 : %.1f\n", *pd);

    free(pi);
    free(pd);

    return 0;
}
