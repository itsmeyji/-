#include <stdio.h>

void hanoi(int n, char from, char to, char temp);

int main() {
    int n = 3;
    hanoi(n, 'A', 'C', 'B'); 
    return 0;
}

void hanoi(int n, char start, char target, char work) {
    if (n == 1) {
        printf("%c���� ���� %d��(��) %c�� �ű� \n", start, n, target);
    }
    else {
        hanoi(n - 1, start, work, target);
        printf("%c���� ���� %d��(��) %c�� �ű� \n", start, n, target);
        hanoi(n - 1, work, target, start);
    }
}
