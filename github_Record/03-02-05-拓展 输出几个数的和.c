#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int count = scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int sum = 0;
    if (count >= 1) {
        sum += num1;
    }
    if (count >= 2) {
        sum += num2;
    }
    if (count >= 3) {
        sum += num3;
    }
    if (count == 4) {
        sum += num4;
    }

    printf("%d", sum);

    return 0;
}
