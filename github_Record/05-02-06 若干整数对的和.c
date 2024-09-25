#include <stdio.h>

int main() {
    int num;
    int sum=0;
    int i=0;
    while (scanf("%d", &num) == 1) {

        i++;
        sum+=num;
        if (i==2){
            printf("%d\n",sum);
            sum=0;
            i=0;
        }       
    }

    return 0;
}
