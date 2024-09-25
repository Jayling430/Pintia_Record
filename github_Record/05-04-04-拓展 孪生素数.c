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
    int n;
    scanf("%d",&n);
    while (!(is_prime(n+2) && is_prime(n))){
        n++;
    }
    printf("%d %d",n,n+2);
}