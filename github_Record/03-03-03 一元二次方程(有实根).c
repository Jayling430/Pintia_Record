#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("X1=%.3lf\nX2=%.3lf", x1, x2);
    } else if (discriminant == 0) {
        x1 = x2 = -b / (2 * a);
        printf("X1=%.3lf\nX2=%.3lf", x1, x2);
    } else {
      
    }

    return 0;
}
