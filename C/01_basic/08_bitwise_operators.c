#include <stdio.h>

int main() {

    printf("비트 연산자\n");
    printf("비트 연산자는 컴퓨터에 숫자가 저장되는 최소 단위인 비트(0, 1)별로 연산하여 결과룰 얻는다.\n");
    printf("&: 두 비트가 모두 1일 때만 1(and)\n");
    printf("^: 두 비트가 모두 같으면 0, 서로 다르면 1(xor)\n");
    printf("|: 두 비트 중 한 비트라도 1이면 1(or)\n");
    printf("~: 각 비트의 부정 0이면 1, 1이면 0(not)\n");
    printf("<<: 왼쪽 시프트, 비트를 왼쪽으로 이동\n");
    printf(">>: 오른쪽 시프트, 비트를 오른쪽으로 이동\n");

    int a = 5, b = 7, c,d,e,f;

    c = a & b; // and 연산, a = ...0000 0101, b = ...0000 0111 이므로 c = ...0000 0101 = 5
    d = a | b; // or 연산, a = ...0000 0101, b = ...0000 0111 이므로 d = ...0000 0111 = 7
    e = a ^ b; // xor 연산, a = ...0000 0101, b = ...0000 0111 이므로 e = ...0000 0010 = 2
    f = ~b; 
    // nor 연산, b = ...0000 0111 이므로 f = ...1111 1000 여기서 c언어는 맨 왼쪽의 비트는 부호 비트로 0이면 양수고 1이면 음수이다. 
    //따라서 ...1111 1000에 대한 2의 보수를 구한다. ...0000 1000은 10진수로 8이고 원래 음수였으므로 -를 붙이면 -8이다.

    a = a >> 1; // 오른쪽 시프트; ...0000 0101 => ...0000 0010 이므로 a = 2;
    b = b << 3; // 왼쪽 시프트: ...0000 0111 => ...0011 1000 이므로 b = 56;

    printf("a: %d, b: %d, c: %d, d: %d, e: %d, f: %d", a, b, c, d, e ,f); // a: 2, b: 56, c: 5, d: 7, e: 2 f: -8 출력
    
    return 0;
}