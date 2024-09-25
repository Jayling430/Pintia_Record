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
int is_odd(int n){
    if(n%2==1){
        return 1;
    }else{
        return 0;
    }
}
void is_evenprime(int n){
    int i;
    scanf("%d",&n);
    for (i=3;i<n;i++){
        if ((n-i)<=i){
            break;
        }
        if (is_prime(i)&&is_prime(n-i)&&is_odd(i)&&is_prime(n-i)){
            printf("%d=%d+%d\n",n,i,n-i);
            break;
        }
    }
}
int main(){
    int a,b;
    int i;
    scanf("%d %d",&a,&b);
    for (i=a;i<=b;i++){
        is_evenprime(i);
    }
}
