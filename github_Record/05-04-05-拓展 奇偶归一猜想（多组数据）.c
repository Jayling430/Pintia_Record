#include <stdio.h>
void collatzConjecture(int n) {
    int is_First=1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (is_First==1){
            printf("%d",n);
            is_First=0;
        }else{
            printf(" %d",n);
        }
    }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int i;
    for (i=a;i<=b;i++){
        printf("%d:",i);
        collatzConjecture(i);
        printf("\n");
    }


    return 0;
}
