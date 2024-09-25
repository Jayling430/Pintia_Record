#include <stdio.h>

int main() {
    int num;
    int sum=0;
    int i=0;
    int n=0;
    while (scanf("%d", &num) == 1) {
        i++;
        sum+=num;
        if (i==3){
            if (sum==2*num){
                n+=1;
            }
            sum=0;
            i=0;
        }       
    }
    printf("%d",n);
    return 0;
}
