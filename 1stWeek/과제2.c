#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char char1;
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", &char1);

	printf("\n\n�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�.", char1);

	int len_char1;
	len_char1 = sizeof(char1);
	printf("�Էµ� ���ڿ��� ���� : %d\n", len_char1);

	return 0;
}