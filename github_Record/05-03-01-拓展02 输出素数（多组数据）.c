#include <stdio.h>
#include <math.h>

int is_prime(int n){
    if (n == 2){
        return 1;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

void print_primes(int a, int b){
    int is_first = 1;
    for (int i = a; i <= b; i++){
        if (is_prime(i)){
            if (!is_first){
                printf(",");
            }
            printf("%d", i);
            is_first = 0;
        }
    }
    printf("\n"); // 打印换行符
}

int main(){
    int a, b;
    while (scanf("%d %d", &a, &b) == 2){ // 使用 scanf 的返回值来判断是否成功读入了两个整数
        print_primes(a, b);
    }
    return 0;
}
