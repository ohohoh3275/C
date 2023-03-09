### 구조체의 padding bytes

```
struct student {
    char c1; // 1byte
    short num; // 2bytes
    char ch2; 1byte
    int score; // 4bytes
    double grade; // 8bytes
    char ch3; // 1byte
}

```

- 요런 struct가 있다고 하면 () - 빈 메모리 공간

ch1(1) () num(2) ch2(1) () () ()
score(4) () () () ()
grade(8)
ch3(1) () () () () () () ()

**선언된 순서에 따라**
이렇게 배치되고 8바이트씩 4라인 총32bytes를 할당하게 된다.

Q. ch1와 num사이에는 왜 공백이 있을까?

-> 선언된 순서를 바꿔 총 메모리할당을 줄여보자

```
struct student {
    char ch1;
    char ch2;
    short num;
    int score;
    double grade;
    char ch3;
}
```

ch1(1) ch2(1) num(2) score(4)
grade(8)
ch3(1) () () () () () () ()

-> 혹은 명령어를 추가해서 패딩바이트를 설정하지 않도록 한다.

```
#include ~~~~

#pragma pack(1); // 이때도 pragma를 써서 제어했었음~!
```
