#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    int a = 1, b = 1;
    if (n == 1) {
        printf("1");
        return 0;
    } else {
        printf("1,");
    }
    for (i = 2; i < n; i++) {
        printf("%d,", b);
        int temp = b;
        b = a + b;
        a = temp;
    }
    printf("%d", b);
    return 0;
}
