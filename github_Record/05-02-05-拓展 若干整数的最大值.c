#include <stdio.h>

int main() {
    int num;
    int max=-10000;
    while (scanf("%d", &num) == 1) {
        if (num>max){
            max=num;
        }
    }
    printf("%d",max);

    return 0;
}
