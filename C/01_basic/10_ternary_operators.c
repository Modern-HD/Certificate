#include <stdio.h>

int main() {
    printf("조건 연산자(삼항 연산자)\n");
    printf("조건에 따라 서로 다른 수식을 처리한다.\n");
    printf("형식: 조건 ? 수식1 : 수식2\n");
    printf("조건의 수식이 참이면 수식1을 처리하고, 조건의 수식이 거짓이면 수식2를 처리한다.\n\n");

    int a = 10, b = 20, c, d;
    c = a > b ? a : b; // 조건의 수식이 거짓이므로 c의 값에는 b가 저장된다.

    d = a > b ? a - b : b - a; // 조건의 수식이 거짓이므로 d의 값에는 b-a인 10이 저장된다.

    printf("c: %d, d: %d", c, d);
    return 0;
}