#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "InsertLinkedList.h"

int main() {
	linkedList_h* L;
	L = createdLinkedList_h();
	printf("(1) ���� ����Ʈ �����ϱ�!\n");
	printList(L);

	printf("(2) ����Ʈ�� [��]��� �����ϱ�!\n");
	insertLastNode(L, "��");
	printList(L);

	printf("(3) ����Ʈ �������� [��]��� �����ϱ�!\n");
	insertLastNode(L, "��");
	printList(L);

	printf("(4) ����Ʈ ù ��°�� [��]��� �����ϱ�!\n");
	insertLastNode(L, "��");
	printList(L);

	printf("(5) ����Ʈ ������ �����Ͽ� ���� ����Ʈ�� �����!\n");
	freeLinkedList_h(L);
	printList(L);

	getchar(); return 0;
}