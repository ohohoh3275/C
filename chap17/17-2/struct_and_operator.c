#include <stdio.h>

struct score {
    int kor;
    int eng;
    int math;
};

void print_list(struct score *sp);

int main(void) {
    struct score jyscore = { 90, 70, 80 };
    struct score *pointer = &jyscore;

    printf("kor >> %d\n", (*pointer).kor); // .kor 처럼 struct 멤버에 접근하는 연산자가 포인터에 접근하는 *연산자보다 우선순위가 높다.
                                            // 그래서 ()로 우선순위를 정해준다 
                                            // 안써주면 ps.kor이 먼저 수행될 수 있음...
    printf("eng >> %d\n", pointer -> eng);  // ->는 [간접 멤버 접근 연산자]이다. 13행의 pointer괄호 후 불러오는 기능과 같다.
    printf("math >> %d\n", pointer -> math);


    // array
    struct score list[3] = {
        { 10, 20, 30 },
        { 30, 30, 30 },
        { 80, 90, 80 }
    };


    int i;

    for(i = 0 ; i < 3 ; i ++ ) {
        printf("%d %d %d \n", list[i].kor, list[i].eng, list[i].math);
    }

    // -> operator in list
    printf("operator usage >>> \n");
    print_list(list); // 여기 예상하는 값이 나오지 않는다 !!!!! 


    return 0;
}


// -> operator in list  
void print_list(struct score *sp) {
    int i;

    for(i = 0 ; i < 3 ; i++ ) {
        printf("%d %d %d \n", (sp+i)->eng, (sp+i)->eng, (sp+i) ->math); // 여기서 
    }
}

// +) struct_poisnter_and_->_operator를 제목으로 쓰면 gcc컴파일 파일 만들때 -> 연산자를 인식해
// _operator.c 파일이 만들어진다...