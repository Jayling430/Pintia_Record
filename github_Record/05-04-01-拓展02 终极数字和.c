#include <stdio.h>
long long f(long long N){
    int sum = 0;
    while (N!=0){
        sum+=N%10;
        N=N/10;
    }
    return sum;
}
int main(){
    long long N;
    scanf("%lld",&N);
    long long m=f(N);
    while (m>9){
        m=f(m);
    }
    printf("%d",m);
}