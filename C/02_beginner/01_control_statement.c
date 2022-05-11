#include <stdio.h>

int main() {

    printf("컴퓨터 프로그램은 명령어가 서술된 순서에 따라 무조건 위에서 아래로 실행되는데,\n");
    printf("조건을 지정해서 진행 순서를 변경할 수 있다.\n");
    printf("이렇게 프로그램의 순서를 변경할 때 사용하는 명령문을 제어문이라고 한다.\n");
    printf("제어문에는 if문, switch~case, 반복문, break, continue 등이 있다.\n\n");

    printf("1 ~ 10까지의 짝수의 합과 홀수의 합을 구하는 프로그램 만들기\n");

    int a = 10, even = 0, odd = 0;
    for (int i = 1; i <= a; i++) { // for문(반복문)의 시작
        if (i % 2 == 0 ) { // if문, i를 2로 나눈 값이 0이면 짝수, 나머지는 홀수이다.
            even += i; // even 변수에 짝수 i 값을 더한다.
        } else {
            odd += i; // odd 변수에 홀수 i 값울 더한다.
        }
    }
    printf("짝수의 합: %d, 홀수의 합: %d", even, odd); // 짝수의 합: 30, 홀수의 합: 25 출력

    return 0;
}