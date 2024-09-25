#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double x=(a+b+c+d)/4;
    printf("%.4lf",0.25*(pow(a-x,2)+pow(b-x,2)+pow(c-x,2)+pow(d-x,2)));
    return 0;
}