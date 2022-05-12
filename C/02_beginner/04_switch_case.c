#include <stdio.h>

int main() {
    
    printf("if문은 조건이 참과 거짓인 경우의 두 가지만 판별하여 제어를 이동해야 하므로\n");
    printf("분기할 문장이 여러 곳이면 중첩 if를 여러 번 사용하는 불편함이 있었다.\n");
    printf("switch 문을 사용하면 분기할 곳이 여러 곳이어도 간단하게 처리할 수 있다.\n\n");

    printf("switch(식)\n");
    // switch는 switch문에 사용되는 예약어로 그대로 입력한다.
    // 식: '레이블1' ~ '레이블n'의 값 중 하나를 도출하는 변수나 수식을 입력한다.
    printf("{\n"); // {}는 switch문의 범위이다, 반드시 입력해야한다.
    printf("case 레이블1:\n");
    // case는 switch문에서 레이블을 지정하기 위한 예약어로 그대로 입력해야 한다.
    // 레이블1: 식의 결과가 될 만한 값 중 하나를 입력한다.
    // 결과가 '레이블1'과 일치하면 이곳으로 찾아온다.
    printf("\t실행할 문장1;\n"); // 식의 결과가 레이블1과 일치할 때 실행할 문장이다.
    printf("\tbreak;\n"); // switch문을 탈출한다.
    printf("case 레이블2:\n"); // 식의 결과가 레이블2와 일치하면 찾아오는 곳이다.
    printf("\t실행할 문장\n");
    printf("\tbreak;\n");
    printf("default\n"); // 식의 결과가 레이블들과 일치하지 않는 경우 찾아오는 곳이다.
    printf("\t실행할 문장3;\n");
    printf("\tbreak;\n");
    printf("}\n\n");

    int jum = 85;
    switch (jum/10) 
    // jum을 10으로 나눠 결과에 해당하는 숫자를 찾아간다. 
    // 85/10은 8.5이지만 C언어에서 정수 나눗셈은 결과도 정수이므로 결과는 8이다
    {
    case 10: // 100점일 경우 찾아오는 곳이지만 할 일은 case9와 같으므로 아무것도 적지 않는다.
    case 9:  // jum/10이 9일 경우 찾아오는 곳이다.
        printf("학점은 A입니다.\n"); // jum/10이 8이므로 실행되지 않는다.
        break;
    case 8: // jum/10이 8이므로 이곳으로 찾아온다.
        printf("학점은 B입니다.\n"); // "학점은 B입니다."를 출력한다.
        break;
    case 7:
        printf("학점은 C입니다.\n");
        break;
    case 6:
        printf("학점은 D입니다.\n");
        break;
    default: // case 10 ~ 6에 해당되지 않은 경우, 즉 jum이 59 이하인 경우 찾아오는 곳이다.
        printf("학점은 F입니다.\n");
        break;
    }

    return 0;
}