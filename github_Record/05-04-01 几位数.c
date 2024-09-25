#include <stdio.h>

int main(){
    long long N;
    scanf("%lld", &N);
    int count = 0;
    if (N == 0) {
        count = 1; // 0 是 1 位数
    } else {
        while (N != 0) {
            N = N / 10;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
