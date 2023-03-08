#include <stdio.h>

struct list {
    int num;
    struct list *next;
};

int main(void) {
    struct list a = {10, 0},
                b = {20, 0},
                c = {30, 0};

    struct list *head = &a, 
                *current;

    a.next = &b; // 여기서 a struct의 포인터를 b,
    b.next = &c; // b struct의 포인터를 c를 향하게 함.

    printf("head -> num : %d\n", head -> num); // head는 16, 17행에서 만든 링크드 리스트의 첫번째 부분인 a이므로,
                                                // a의 num값을 출력한다.

    printf("head -> next -> num : %d\n", head -> next -> num); // a의 다음값인 next의 포인터가 가리키는 b의 num을 출력한다.

    printf("list all :");

    current = head; // head값을 현재 값으로 세팅
    while(current != NULL) {
        printf("%d ", current -> num);  // 현재 current값의 num
        current = current -> next; // current값은 현재 current값의 포인터인 next 예를들어, a일때 a.next의 값
    }
    printf("\n");

    return 0;
}