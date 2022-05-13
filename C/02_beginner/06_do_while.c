#include <stdio.h>

int main() {

    printf("do~while문\n");
    printf("조건이 참인 동안 정해진 문장을 반복수행하다가 조건이 거짓이면 반복문을 벗어나는 while문과 같은 동작을 하는데,\n");
    printf("다른 점은 do~while문은 무조건 한 번 실행한 다음 조건을 판단하여 탈출 여부를 결정한다는 것이다.\n\n");

    printf("형식\n");
    printf("do\n"); // do는 do~while문에 사용되는 예약어로, do~while의 시작 부분에 그대로 입력한다.
    printf("\t실행할 문장;\n");
    // 조건이 참인 동안 실행할 문장을 입력한다.
    // 문장이 두 문장 이상인 경우 {}를 입력하고 그 사이에 실행할 문장들을 입력한다.
    printf("while(조건);\n");
    // while은 do~while문에서 사용되는 예약어로, do~while의 끝부분에 그대로 입력한다.
    // (조건): 참이나 거짓을 결과로 갖는 수식을 '조건'에 입력한다.
    // 조건문이 반복문의 끝에 있기 때문에 무조건 한 번 실행한 다음 조건을 판단한다.

    int i = 0, hap =0;
    do // do~while문의 시작점이다.
    {
        i++;
        hap += i; // i의 값을 hap에 누적시킨다.
    } while (i<10); //i가 10보다 작은 동안 위의 문장을 반복하여 수행한다.
    printf("i: %d, hap: %d\n", i, hap); // i: 10, hap: 55 출력

    return 0;
}
