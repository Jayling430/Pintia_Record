#include <stdio.h>
void f(int n){
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
    printf("%d\n",cnt);
}
int main(){
    int n;
    while (scanf("%d",&n)==1){
        f(n);
    }
}