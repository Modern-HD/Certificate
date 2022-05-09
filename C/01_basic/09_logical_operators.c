#include <stdio.h>

int main() {

    printf("논리 연산자\n");
    printf("논리 연산자는 두 개의 논리 값을 연산하여 참(ture) 또는 거짓(false)의 결과를 얻는다.\n");
    printf("관계 연산자와 마찬가지로 거짓은 0, 참은 1이다.\n");
    printf("!: 부정(not)\n");
    printf("&&: 모두 참이면 참(and)\n");
    printf("||: 하나라도 참이면 참(or)\n");

    int a = 2, b = 3, c, d, e;

    c = a > 3 && b > 2; // false && true 이므로 c = false;

    d = a > 3 || b > 2; // false || true 이므로 d = true;
    e = !c; // !false이므로 true;

    printf("c: %d, d: %d, e: %d\n\n", c, d, e); // c: 0, d: 1, e: 1 출력
    
    return 0;

    printf("조건 연산자(삼항 연산자)\n");
    printf("조건에 따라 서로 다른 수식을 처리한다.\n");
    printf("형식: 조건 ? 수식1 : 수식2\n");
}