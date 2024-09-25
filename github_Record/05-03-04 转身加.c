#include <stdio.h>

int reverse(int num) {
    int reversedNum = 0;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num = num / 10;
    }
    return reversedNum;
}

int main() {
    int m, n;
    while (1) {
        scanf("%d %d", &m, &n);
        if (m == 0 && n == 0) {
            break;
        }
        int reversedM = reverse(m);
        int reversedN = reverse(n);
        printf("%d\n", reversedM + reversedN);
    }
    return 0;
}
