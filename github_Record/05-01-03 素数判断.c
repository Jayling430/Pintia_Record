#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int flag=1;
    if (n==2){
        printf("YES");
        return 0;
    }
    for (i=2;i<sqrt(n);i++){
        if(n%i==0){
            flag=0;
        }
    }
    if (flag==1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
