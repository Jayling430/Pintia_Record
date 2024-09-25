#include <stdio.h>
#include <string.h>

int main(){
    char n[100]; // 假设输入的字符串不超过 100 个字符
    scanf("%s", n);
    int i;
    for (i = strlen(n) - 1; i >= 0; i--){
        printf("%c", n[i]);
    }
    return 0;
}
