#include <stdio.h>

int main() {

    printf("----scanf()----\n");
    int i, j;
    float aa;
    char cc, dd[10];
    printf("문자형 변수 c의 값을 입력하시오.\n");
    scanf("%c", &cc); // 문자형 변수 cc에 문자 1글자를 입력 받는다.

    printf("정수형 변수 i에 10진수, j에 8진수를 입력하시오\n");
    scanf("%d %o", &i, &j); // 정수형 변수 1에 10진수를, 정수형 변수 j에 8진수를 입력 받는다, 8진수 20이 10진수로는 16이다.
    printf("cc: %c, i: %d, j: %o\n", cc, i, j);

    printf("실수형 변수 aa에 값을 입력하시오.\n");
    scanf("%f", &aa);
    printf("문자열 변수 dd에 10개 미만의 문자열을 입력하시오.\n");
    scanf("%s", dd); // dd[10]으로 선언하였으므로 10개 미만의 문자열을 입력받을 수 있으며 배열의 이름은 주소이므로 &를 붙이지 않는다.
    printf("aa: %f, dd: %s\n", aa, dd);
    printf("-------------\n\n");

    printf("----printf()----\n");
    int k = 250;
    float a = 125.23f; // 실수형 변수 a에 125.23을 저장한다. 단정도형 실수는 f를 붙여야 한다.
    float b = 314.1592e+5; // 실수형 변수 b에 314.1592e+5를 저장한다. 정규화 되어 3.141592e+07 형태로 저장된다.
    printf("k: %d, a: %f, b: %f\n", k, a, b);

    char c = 'A';
    char ddd[] = "Korea";
    printf("c: %c, ddd: %s\n\n", c, ddd);

    printf("다른 형태로 출력\n");
    printf("a: %8.2f, b: %e\n", a, b);
    // %8.2f은 우선 8칸을 확보한 후 소수점과 소수점 이하 2자리를 출력하고 남은 5자리에서 125를 출력한다.
    // %e는 b를 지수 형태로 출력한다.
    printf("%-10s, %10s\n\r", ddd, ddd);
    // -는 왼쪽을 기준으로 출력하기 때문에 10자리 확보 후 왼쪽에 korea를 출력하고 나머지 5칸은 빈칸으로 출력한다.
    printf("-----------------");

    return 0;
}