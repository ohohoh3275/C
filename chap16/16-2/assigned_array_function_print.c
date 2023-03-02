#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char **ps);

int main(void) {

    char temp[80];
    char *str[21] = { 0 };
    int i = 0;
    
    while(i < 20) {
        printf("문자열 입력 >>> ");
        gets(temp);
        if(strcmp(temp, "end") == 0) {
            break; // end가 입력되면 반복 종료
        }
        str[i] = (char *)malloc(strlen(temp) + 1); //저장공간 할당
        strcpy(str[i], temp);
        i++;
    }

    print_str(str);

    for(i = 0; str[i] != NULL; i++) {
        free(str[i]);
    }

    return 0;
}

void print_str(char **ps) {
    while(*ps != NULL) {
        printf("%s\n", *ps);
        ps++;
    }
}