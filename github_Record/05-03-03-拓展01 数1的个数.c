#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int left=0;
    int i,cnt=0;
    int temp;
    for(i=1;i<=n;i++){
        temp=i;
        while(temp!=0){
            left=temp%10;
            if(left==1){
                cnt++;
            }
            temp=temp/10;
        }
    }
    printf("%d",cnt);
    return 0;
}