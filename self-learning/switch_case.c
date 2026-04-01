//#include <stdio.h>
//int main() {
//	int a = 4;
//	switch (a) {
//	case 5:
//		printf("A");
//	case 3:
//		printf("B");
//	case 1:
//		printf("C");
//	default:
//		printf("D");
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
    int a = 4; // 변수 a를 4로 초기화

    // a의 값에 따라 실행할 위치를 결정합니다.
    switch (a) {
    case 5:
        printf("A"); // a가 5일 때 실행되지만, 아래에 break가 없으면 다음 케이스도 실행됩니다.
    case 3:
        printf("B"); // a가 3일 때 실행됩니다.
    case 1:
        printf("C"); // a가 1일 때 실행됩니다.
    default:
        // a가 위 케이스(5, 3, 1) 중 어디에도 해당하지 않을 때 이곳으로 점프합니다.
        // 현재 a는 4이므로, default 위치부터 아래로 쭉 실행됩니다.
        printf("D");
    }

    return 0;
}