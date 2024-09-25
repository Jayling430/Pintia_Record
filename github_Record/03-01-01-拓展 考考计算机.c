#include <stdio.h>

int main() {
    int A, B, result;
    char op;
    scanf("%d%c%d", &A, &op, &B);

    switch (op) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            result = A / B;
            break;
        default:
            printf("Invalid operator");
            return 1;
    }

    printf("%d",result);

    return 0;
}
