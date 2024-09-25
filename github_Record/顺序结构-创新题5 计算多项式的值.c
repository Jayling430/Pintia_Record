#include <stdio.h>
#include <math.h>

int main() {
    double x, a, b, c, d;
    scanf("x=%lf,a=%lf,b=%lf,c=%lf,d=%lf", &x, &a, &b, &c, &d);
    printf("f(%.7lf)=%.7lf", x,a * pow(x, 3) + b * pow(x, 2) + c * x + d);
    return 0;
}
