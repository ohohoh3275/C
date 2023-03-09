#include <stdio.h>
#define VER 7
#define BIT16

int main(void) {
    int max;

#if VER >= 6
    printf("version %d. \n", VER);
#endif

#ifdef BIT16 // BIT16이 정의되어있다면~!
    max = 32767;
#else  
    max = 2147483647;
#endif
    
    printf("int variables max : %d\n", max);

    return 0;
}