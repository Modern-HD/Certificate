#include <stdio.h>

int main() {

    printf("연산자는 변수와 값에 대한 연산을 하는데 사용된다.\n\n");

    printf("산술 연산자\n");
    printf("+: 덧셈, -: 뺄셈, *: 곱셈, /: 나눗셈, %%: 나머지\n");
    printf("++: 증가 연산자, --: 감소 연산자\n");
    printf("증가 연산자와 감소 연산자는 전치와 후치로 나뉘어 진다.\n");
    printf("전치: 변수 앞에 증감 연산자가 오는 형태로 먼저 변수의 값을 증감 시킨 후 변수를 연산에 사용한다.(++a, --a)\n");
    printf("후치: 변수 뒤에 증감 연산자가 오는 형태로 먼저 변수를 연산에 사용한 후 변수의 값을 증감시킨다.(a--, a++)\n\n");

    int a, b, c;
    a = 5 % 3; // 5에서 3을 나눈 나머지 2가 a에 저장 (a=2)
    a--; // a = a - 1과 같다. (a=1)

    b = (a++) + 3; // a++는 후치 연산이므로 b = (1) + 3, (b=4, a=2)
    
    printf("a: %d, b: %d\n", a, b); // a: 2, b: 4 출력
    c = (++a) + 3; // ++a는 전치 연산이므로 c = (3) + 3, (c=6, a=3)

    printf("a: %d, b: %d, c: %d\n\n", a, b, c); // a:3, b: 4, c: 6 출력

    printf("관계 연산자\n");
    printf("괸계 연산자는 두 수의 관계를 비교해서 참(true) 또는 거짓(false)의 결과를 얻는다.\n");
    printf("C 프로그램에서 거짓은 0, 참은 1로 사용되지만 0외의 모든 숫자도 참으로 간주한다.\n");
    printf("==: 같다, !=: 같지 않다, >: 크다, >=: 크거나 같다, <: 작다, <=: 작거나 같다\n\n");

    return 0;   
}