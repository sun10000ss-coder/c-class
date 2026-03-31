#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
	int res;
	char a[30];
	char b[30];
	printf("첫번째 단어를 입력하시요");
	scanf("%s", a);
	printf("두번쨰 단어를 입력하시요:");
	scanf("%s", b);
	res =strcmp(a, b);//문자열비교
	if (res < 0)//음수이면 문자열1일 문자열2보다 사전순으로 앞에 있음
	
		printf("%s가 %s보다 앞이다\n", a, b);
	else if(res == 0)//변환값이 0이면 완전히 같다
		printf("%s가 %s보다 같습니다\n", a, b);
	else
		printf("%s가 %s보다 뒤에있다\n", a, b);
	//양수이면 분자열1이 문자열2보다 사전순으로 뒤에 있음
	return 0;
}