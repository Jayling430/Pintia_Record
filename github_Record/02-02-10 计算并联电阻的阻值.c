#include <stdio.h>
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%.2lf",1.0*a*b/(a+b));
    return 0;
}