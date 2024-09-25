#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int d=b-a;
    int ans;
    int n;
    scanf("%d",&n);
    ans = a+(n-1)*d;
    printf("%d",ans);
    return 0;
}