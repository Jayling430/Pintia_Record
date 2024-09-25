#include <stdio.h>

int main(){
    char n;
    scanf("%c", &n);
    if (n >= 'A' && n <= 'Z'){
        printf("%c", n + 32);  // 将大写字母转换为小写字母
    } else if (n >= 'a' && n <= 'z'){
        printf("%c", n - 32);  // 将小写字母转换为大写字母
    } else {
        printf("输入的不是字母");
    }
    return 0;
}
