#include <stdio.h>
void f(int k){
    int i;
    int a[6000];
    int b[6000];
    int acnt=0,bcnt=0;
    for (i=1;i<=k;i++){
        if (i%2==1){
            a[acnt]=i;
            acnt++;
        }else{
            b[bcnt]=i;
            bcnt++;
        }
    }
    printf("%d",a[0]);
    for (i=1;i<acnt;i++){
        printf(" %d",a[i]);
    }
    printf("\n");
    printf("%d",b[0]);
    for (i=1;i<bcnt;i++){
        printf(" %d",b[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int k[100];
    for (i=0;i<n;i++){
        scanf("%d",&k[i]);
    }
    int len=i;
    for (i=0;i<len-1;i++){
        f(k[i]);
        printf("\n\n");
    }
    f(k[len-1]);
    return 0;
}