#include <stdio.h>

struct inputs {
    double left;
    double right;
};

struct inputs exchange(struct inputs robot);

int main(void) {
    struct inputs robot;

    printf("enter inputs (left right) ex(2.0 1.8) >> ");
    scanf("%lf %lf", &(robot.left), &(robot.right));
    robot = exchange(robot);
    printf("exchanged vision >> %.1lf %.1lf \n", robot.left, robot.right);

    return 0;
}

struct inputs exchange(struct inputs robot) {
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}