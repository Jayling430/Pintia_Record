#include <stdio.h>

int main(){
    long long N;
    scanf("%lld", &N);
    int sum = 0;
    while (N!=0){
        sum+=N%10;
        N=N/10;
    }
    printf("%d\n", sum);
    return 0;
}
