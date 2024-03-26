#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char char1;
	printf("문자열을 입력하세요 : ");
	scanf("%s", &char1);

	printf("\n\n입력된 문자열은\n\"%s\"\n입니다.", char1);

	int len_char1;
	len_char1 = sizeof(char1);
	printf("입력된 문자열의 길이 : %d\n", len_char1);

	return 0;
}