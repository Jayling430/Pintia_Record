#include <stdio.h>
#include <math.h>
int reverse(int num) {
    int reversedNum = 0;
    int cnt=0;
    while (num > 0) {
        if (num % 10 == 0 && reversedNum == 0) {
            reversedNum = reversedNum * 10;
            cnt++;
        } else {
            reversedNum = reversedNum * 10 + num % 10;
        }
        num = num / 10;
    }
    return reversedNum;
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d",reverse(N));
    return 0;
}
