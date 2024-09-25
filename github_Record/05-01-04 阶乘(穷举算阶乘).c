#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    long long sum=1;
    int i=1;
    for (i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("%d!=%lld",n,sum);
    return 0;
}
