#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double p=1.0*(a+b+c)/2;
    printf("%.6lf",pow(p*(p-a)*(p-b)*(p-c),0.5));
    return 0;
}