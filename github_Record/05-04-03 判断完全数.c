#include <stdio.h>
int main(){
    long n;
    scanf("%ld",&n);
    int sum=0,i;
    for (i=1;i<n;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if (sum==n){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}