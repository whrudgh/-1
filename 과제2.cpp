#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char str[20];
    int length = 0;

    printf("���ڿ��� �Է��ϼ���. ");
    scanf("%s", str);
    printf("�Էµ� ���ڿ��� %s �Դϴ�.\n", str);

   
    while (str[length] != '\0') {
        length++;
    }

    printf("�Էµ� ���ڿ��� ���� %d", length);

    return 0;
}