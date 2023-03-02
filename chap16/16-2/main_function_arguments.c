#include <stdio.h>

int main(int argc, char **argv) {
    int i;

    for(i = 0; i < argc; i++ ){
        printf("%s\n", argv[i]); // debug폴더 안에서 명령어를 실행해야하는데 ... ???
    }

    return 0;
}