//#include <stdio.h>
//int main(){
//	int a = 8;
//	printf("%d %d %d", a << 1, a >> 1, a & 3);
//	}

#include <stdio.h>

int main() {
    int a = 8; // 기준 변수 a에 8을 저장

    // 1. a << 1 : 왼쪽 시프트 연산 숫자를 2배로 만듦  결과: 16
    // 2. a >> 1 : 오른쪽 시프트 연산 숫자를 2로 나눔  결과: 4
    // 3. a & 3  : 비트 AND 연산 8과 3의 공통 비트 찾기 결과: 0

    printf("%d %d %d", a << 1, a >> 1, a & 3);

    return 0;
}