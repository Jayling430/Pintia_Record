#include <stdio.h>
#include <stdlib.h>

int main() {
    char input;
    int sum = 0;
    char str[2];  // 字符串数组，用于存储字符和 null 终止符
    while (1) {
        scanf("%c", &input);
        if (input == '#') {
            break;
        }
        if (input >= '1' && input <= '9') {
            str[0] = input;  // 将字符存入字符串数组
            str[1] = '\0';   // 添加 null 终止符
            sum += atoi(str);
        }
    }
    printf("%d", sum);
    return 0;
}
