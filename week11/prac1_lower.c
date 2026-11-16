#include <stdio.h>

int main(void) {
    char str[100];
    char *p;
    int count = 0;

    printf("영문 문장을 입력하시오 : ");
    fgets(str, sizeof(str), stdin);

    for (p = str; *p != '\0'; p++) {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        if (*p >= 'A' && *p <= 'Z') {
            *p = *p - 'A' + 'a';
        }
        if (*p != ' ') {
            count++;
        }
    }

    printf("소문자 : %s\n", str);
    printf("글자 수 (공백 제외) : %d\n", count);
    return 0;
}
