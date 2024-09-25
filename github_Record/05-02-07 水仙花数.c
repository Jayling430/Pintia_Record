#include <stdio.h>
#include <math.h>
int main(){
    int a[1000];
    int i;
    int x;
    for (i=0;;i++){
        scanf("%d",&x);
        if (x==0){
            break;
        }
        a[i]=x;
    }
    int len=i;
    int g,s,b;
    for (i=0;i<len;i++){
        g=a[i]%10;
        s=a[i]/10%10;
        b=a[i]/100;
        if (pow(g,3)+pow(s,3)+pow(b,3)==a[i]){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}