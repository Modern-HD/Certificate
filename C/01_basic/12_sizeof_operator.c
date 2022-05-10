#include <stdio.h>

int main() {

    printf("sizeof 연산자\n");
    printf("sizeof 연산자는 자료형의 크기를 출력하는 연산자이다.\n");

    int myInt; // 정수, 4Byte
    float myFloat; // 실수, 4Byte
    double myDouble; // 실수, 8Byte
    char myChar; // 문자, 1Byte

    printf("sizeof(myInt): %lu\n", sizeof(myInt)); // sizeof(myInt): 4 출력
    printf("sizeof(myFloat): %lu\n", sizeof(myFloat)); // sizeof(myFloat): 4 출력
    printf("sizeof(myDouble): %lu\n", sizeof(myDouble)); // sizeof(myDouble): 8 출력
    printf("sizeof(myChar): %lu\n\n", sizeof(myChar)); // sizeof(myChar): 1 출력

    printf("시스템이 자동으로 인식하는 크기\n");
    printf("sizeof('#'): %lu\n", sizeof('#')); // char로 인식하여 4 출력
    printf("sizeof(20): %lu\n", sizeof(20)); // int로 인식하여 4 출력
    printf("sizeof(3.14): %lu\n", sizeof(3.14)); // double로 인식하여 8 출력
    printf("sizeof(""kim""): %lu\n", sizeof("kim")); // 문자열로 인식하여 kim의 3Byte와 마지막 널(\0)문자 1Byte이 합쳐서 4 출력


    return 0;
}