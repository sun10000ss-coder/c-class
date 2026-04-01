//#include <stdio.h>
//int main() {
//	int a = 7, b = 2;
//	int c;
//	double d, e;
//
//	c = a / b;
//	d = a / b;
//	e = (double)a / b;
//
//	printf("c=%d\n", c);
//	printf("d=%.1f\n", c);
//	printf("e=%.1f\n", c);
//
//}

#include <stdio.h>

int main() {
    // 1. 변수 선언 및 초기화
    int a = 7, b = 2;   // 정수형 변수 a(7)와 b(2) 선언
    int c;              // 결과를 담을 정수형 변수
    double d, e;        // 결과를 담을 실수형(부동소수점) 변수

    // 2. 정수 나눗셈 (결과는 정수)
    // 7 / 2의 몫인 3이 c에 저장됩니다.
    c = a / b;

    // 3. 정수 나눗셈 결과를 실수 변수에 저장
    // a / b 자체는 이미 정수 '3'이므로, d에는 3.0이 저장됩니다.
    d = a / b;

    // 4. 명시적 형 변환을 이용한 실수 나눗셈
    // a를 (double)로 강제 변환하여 7.0 / 2를 계산하므로, e에는 3.5가 저장됩니다.
    e = (double)a / b;

    // 5. 결과 출력
    printf("c=%d\n", c);    // 정수 출력: 3
    printf("d=%.1f\n", d);  // 실수 출력(소수점 첫째자리): 3.0 (기존 c에서 d로 수정)
    printf("e=%.1f\n", e);  // 실수 출력(소수점 첫째자리): 3.5 (기존 c에서 e로 수정)

    return 0;
}