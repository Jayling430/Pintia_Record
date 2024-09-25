#include <stdio.h>
#include <math.h>
int f(int n){
    int i;
    if (n==2){
        return 1;
    }
    for (i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,b;
    int i;
    int is_First = 1;
    scanf("%d %d",&a,&b);
    for (i=a;i<=b;i++){
        if(is_First==1){
            if(f(i)){
                printf("%d",i);
                is_First=0;
            }
        }else{
            if(f(i)){
                printf(",%d",i);
            }
        }
    }
}
