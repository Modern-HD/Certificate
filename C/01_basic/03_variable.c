#include <stdio.h>

int main() {
    printf("변수\n");
    printf("변수란 컴퓨터가 명령을 처리하는 도중 발생하는 값을 저장하기 위한 공간으로, 변할 수 있는 값을 의미한다.\n");
    printf("변수는 저장하는 값에 따라 정수형, 실수형, 문자형, 포인터형 등으로 구분한다.\n\n");

    printf("변수명 작성 규칙\n");
    printf("1. 영문자, 숫자, _(under bar)를 사용하며 글자 수에 제한이 없다.\n");
    printf("2. 중간에 공백을 포함할 수 없다.\n");
    printf("3. 대, 소문자를 구분한다.\n");
    printf("4. 첫 자는 영문자나 _로 시작해야한다.\n");
    printf("5. 예약어는 사용할 수 없다.\n");
    printf("6. 변수 선언 시에도 문장 끝에 반드시 세미클론(;)을 붙여야 한다.\n\n");

    int abc_1; // 변수명 규칙에 맞다.
    // int 1abc; // 숫자로 시작할 수 없다.
    int Kim; // 변수명 규칙에 맞다.
    int kim; // 변수명 규칙에 맞다, 위의 Kim과는 별개의 변수로 취급한다.
    // int for; // for는 예약어이므로 사용할 수 없다.
    // char kang // 세미클론을 붙이지 않았다.

    printf("C언어의 자료형\n");
    printf("C언어에는 다양한 자료형을 제공한다.\n\n");

    printf("기본 자료형과 기억범위\n\n");

    printf("문자\n");
    printf("char/ 1Byte\n\n");

    printf("부호없는 문자형\n");
    printf("unsigned char/ 1Byte\n\n");

    printf("정수\n");
    printf("short, int, long, long long/ 2, 4, 4, 8Byte\n\n");

    printf("부호없는 정수형\n");
    printf("unsigned short, unsigned int, unsigned long/ 2, 4, 4Byte\n\n");

    printf("실수\n");
    printf("float, double, long double/ 4, 8, 8Byte\n\n");

    return 0;
}