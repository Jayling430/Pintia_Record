#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int r=m%n;
    while (r!=0){
        m=n;
        n=r;
        r=m%n;
    }
    printf("%d",n);
    return 0;
}
