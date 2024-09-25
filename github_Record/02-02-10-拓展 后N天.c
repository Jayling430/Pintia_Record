#include <stdio.h>
int main(){
    int d,n;
    scanf("%d %d",&d,&n);
    int m=d+n;
    if (m%7==0){
        printf("%d",7);
    }else{
        printf("%d",m%7);
    }
    return 0;
}