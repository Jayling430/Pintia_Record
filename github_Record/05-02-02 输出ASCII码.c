#include <stdio.h>
int main() {
    char input;
    while (1) {
        scanf("%c", &input);
        if (input == '#') {
            break;
        }
        printf("%c-%d\n", input, input);
    }
    return 0;
}
