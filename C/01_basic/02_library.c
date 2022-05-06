#include <stdio.h>

int main() {

    printf("라이브러리\n");
    printf("라이브러리는 프로그램을 효율적으로 개발할 수 있도록 자주 사용하는 함수나 데이터들을 미리 만들어 모아 놓은 집합체이다.\n");
    printf("자주 사용하는 함수들의 반복적인 코드 작성을 피하기 위해 미리 만들어 놓은 것으로, 필요할 때는 언제든지 호출하여 사용할 수 있다.\n");
    printf("라이브러리에는 표준 라이브러리와 외부 라이브러리가 있다.\n\n");

    printf("표준 라이브러리: 프로그래밍 언어에 기본적으로 포함되어 있는 라이브러리로, 여러 종료의 모듈이나 패키지 형태이다.\n");
    printf("외부 라이브러리: 개발자들이 필요한 기능들을 만들어 인터넷 등에 공유해 놓은 것으로, 외부 라이브러리를 다운받아 설치한 후 사용한다.\n\n");

    printf("C언어는 라이브러리를 헤더 파일로 제공하는데, 각 헤더 파일에는 응용프로그램 개발에 필요한 함수들이 정리되어 있다.\n");
    printf("C언어에서 헤더 파일을 사용하려면 '#include <stdio.h>'와 같이 include문을 선언한 후 사용해야 한다.\n\n");

    printf("stdio.h: 데이터의 입, 출력에 사용되는 기능들을 제공한다.\n");
    printf("주요 함수: printf(), scanf(), fprinf(), fscanf(), fclose(), fopen() 등\n\n");

    printf("math.h: s수학 함수들을 제공한다.\n");
    printf("주요 함수: sqrt(), pow(), abs(), log() 등\n\n");

    printf("string.h: 문자열 처리에 사용되는 기능들을 제공한다.\n");
    printf("주요 함수: strlen(), stcpy(), strcmp() 등\n\n");

    printf("stdlib.h: 자료형 변환, 난수 발생, 메모리 할당에 사용되는 기능들을 제공한다.\n");
    printf("주요 함수: atoi(), atof(), srand(), malloc(), free() 등\n\n");

    printf("time.h: 시간 처리에 사용되는 기능들을 제공한다.\n");
    printf("주요 함수: time(), clock() 등");

    return 0;
}