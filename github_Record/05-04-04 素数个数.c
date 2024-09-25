#include <stdio.h>
#include <math.h>
int is_prime(int n){
    if (n == 2){
        return 1;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i;
    int cnt=0;
    for (i=a;i<=b;i++){
        if(is_prime(i)){
            cnt++;
        }
    }
    printf("%d",cnt);
}