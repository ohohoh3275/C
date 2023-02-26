#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main(void) {
    char *pa = "okay";
    char *pb = "nope";

    printf("pa : %s, pb : %s \n", pa, pb);
    swap_ptr(&pa, &pb); // 1. 주소로 주고
    printf("pa : %s, pb : %s \n", pa, pb);

    return 0;
}

void swap_ptr(char **ppa, char **ppb) { // 2. 포인터로 받는다. 다만 포인터가 이중포인터 일 뿐이다.
    
    char *pt; // temp
    pt = *ppa; // 
    *ppa = *ppb;
    *ppb = pt; 
}