#include <stdio.h>

int main() {
    
    printf("다중 if문\n");
    printf("if문은 조건이 참과 거짓인 경우의 두 가지만 판별하여 제어를 이동한다.\n");
    printf("선택해야 할 문장이 여러 개면 if문을 여러개 사용하는 다중 if문을 사용한다.\n");

    int jum = 85;
    if(jum >= 90) { // 거짓
        printf("학점은 A입니다.\n"); // 조건이 거짓이므로 이 부분은 실행하지 않음
    } else if (jum >= 80) { // 참
        printf("학점은 B입니다.\n"); // 조건이 참이므로 "학점은 B입니다."를 출력하고 다음 else if, else를 실행하지 않음
    } else if (jum >= 70) {
        printf("학점은 C입니다.\n");
    } else if (jum >= 60) {
        printf("학점은 D입니다.\n");
    } else {
        printf("학점은 F입니다.\n"); // 만약에 위의 모든 조건문이 거짓일 경우 이 부분을 실행한다.
    }

    return 0;
}