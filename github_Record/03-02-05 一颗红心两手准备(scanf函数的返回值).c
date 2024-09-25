#include <stdio.h>

int main() {
    int num1, num2;
    int count = scanf("%d %d", &num1, &num2);

    if (count == 1) {
        printf("%d", num1 * num1);
    } else if (count == 2) {
        printf("%d", num1 * num2);
    } else {
        printf("无效输入");
    }

    return 0;
}
