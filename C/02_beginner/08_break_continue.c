#include <stdio.h>

int main() {

    printf("break, continue\n");
    printf("switch문이나 반복문의 실행을 제어하기 위해 사용한다.\n\n");

    printf("break\n");
    printf("switch문이나 반복문 안에서 break가 나오면 블록을 벗어난다.\n\n");

    printf("continue\n");
    printf("반복문에서만 사용된다.\n");
    printf("continue 이후의 문장을 실행하지 않고 제어를 반복문의 처음으로 옮긴다.\n\n");

    int i = 0, hap = 0;
    while (1) 
    // 조건이 참이므로 무한 반복한다. 
    // 중간에 반복을 끝내는 문장이 반드시 있어야한다.
    {
        i++; // i의 값을 1씩 누적시킨다.
        if(i>10) // i가 10보다 크면 break를 실행한다.
            break; // 반복문을 탈출한다.
        if(i%5 == 0) // i를 5로 나눈 나머지가 0이면, 즉 i가 5의 배수이면 continue를 실행한다.
            continue; // 반복문의 처음으로 돌아간다. 5의 배수는 hap에 누적되지 않는다.
        hap += i; // i의 값을 hap에 누적시킨다.
    }
    printf("i: %d, hap: %d\n", i, hap); // i: 11, hap: 40 출력


    return 0;
}