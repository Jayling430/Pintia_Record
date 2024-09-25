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
    return reversedNum*pow(10,cnt);
}

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        int reversedA = reverse(A);
        printf("%d\n", reversedA * B);
    }
    
    return 0;
}
