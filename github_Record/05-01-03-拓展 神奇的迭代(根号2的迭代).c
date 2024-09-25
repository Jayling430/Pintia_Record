#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    double x=99999999.0;
    for (i=1;i<=n;i++){
        x=sqrt(x+2);
    }
    printf("x[%d]=%.10lf",n,x);
    return 0;
}
