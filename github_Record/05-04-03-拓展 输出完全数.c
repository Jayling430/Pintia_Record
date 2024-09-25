#include <stdio.h>
int f(long n){
    int sum=0,i;
    for (i=1;i<n;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if (sum==n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i;
    int flag=0;
    int is_First=1;
    for (i=a;i<=b;i++){
        if (f(i)){
            if (is_First){
                printf("%d",i);
                is_First=0;
            }else{
                printf(" %d",i);
            }
            
            flag=1;
        }
    }
    if (flag!=1){
        printf("Not Found.");
    }
    return 0;
}