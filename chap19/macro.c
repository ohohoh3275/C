#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MESSAGE "passed"
#define ERR_MSG printf("out of range\n")


// int main(void) {
//     double radius, area;

//     printf("enter radius (under 10) : ");
//     scanf("%lf", &radius);
//     area = PI * radius * radius; // ㅠr2
//     if(area > LIMIT) {
//         ERR_MSG;
//     } else {
//         printf("circle area : %.2lf (%s)\n", area, MESSAGE);
//     }

//     return 0;
// }


#define SUM(a, b) ((a) + (b))
#define MULTUPLY(a, b) ((a) * (b))

int main(void) {
    int a = 10, b = 20;
    int x = 30, y = 40;
    int res;

    printf("a + b = %d\n", SUM(a, b));
    printf("x + y = %d\n", SUM(x, y));
    res = 30 / MULTUPLY(2, 5);
    printf("res : %d\n", res);

    return 0;
}

