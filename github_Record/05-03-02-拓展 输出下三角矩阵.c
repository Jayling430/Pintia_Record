#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        // 输出空格
        for (int j = 1; j <= N - i; j++){
            printf("   ");
        }
        // 输出数字
        for (int k = 1; k <= i; k++){
            printf("%3d", k);
        }
        printf("\n");
    }

    return 0;
}
