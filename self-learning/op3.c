//#include <stdio.h>
//int main(void) {
//	int a = 10, b = 20;
//	int max;
//
//	if (a > b) {
//		max = a;
//	}
//	else {
//		max = b;
//	}
//	return 0;
//}



#include <stdio.h>

int main(void) {
	int a = 10, b = 20;
	int max;

	// 삼항 연산자를 사용한 수정 답안
	max = (a > b) ? a : b;

	printf("max: %d\n", max); // 결과 확인을 위한 출력문 추가
	return 0;
}