#include <stdio.h>

int main() {
    int A, op, B, C;
    scanf("%d %d %d %d", &A, &op, &B, &C);

    printf("%d", A);
    switch (op) {
        case 1:
            printf("+");
            break;
        case 2:
            printf("-");
            break;
        case 3:
            printf("*");
            break;
        case 4:
            printf("/");
            break;
    }
    printf("%d=%d ", B, C);

    int result;
    switch (op) {
        case 1:
            result = A + B;
            break;
        case 2:
            result = A - B;
            break;
        case 3:
            result = A * B;
            break;
        case 4:
            result = A / B;
            break;
    }

    if (result == C) {
        printf("GOOD");
    } else {
        printf("SORRY");
    }

    return 0;
}
