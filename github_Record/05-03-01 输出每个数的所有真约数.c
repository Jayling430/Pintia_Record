#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int i, j;
    for (i = a; i <= b; i++){
        printf("%d:", i);
        int isFirst = 1; // 用于检查是否是当前行的第一个数字
        for (j = 1; j < i; j++){
            if (i % j == 0){
                if (isFirst) {
                    printf("%d", j);
                    isFirst = 0;
                } else {
                    printf(" %d", j);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
