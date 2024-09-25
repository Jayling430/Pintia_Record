#include <stdio.h>

int is_valid(int num) {
    int digits[4];
    int i, j;

    // 将数字拆分成各位数字
    for (i = 3; i >= 0; i--) {
        digits[i] = num % 10;
        if (digits[i]==0){
            return 0;
        }
        num = num / 10;
    }

    // 检查各位数字是否不相同
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (digits[i] == digits[j]) {
                return 0;
            }
        }
    }

    // 检查是否从左至右数字降序排列
    for (i = 0; i < 3; i++) {
        if (digits[i] <= digits[i + 1]) {
            return 0;
        }
    }

    // 检查相邻的两个数字前一个不能是后一个的倍数
    for (i = 0; i < 3; i++) {
        if (digits[i] % digits[i + 1] == 0) {
            return 0;
        }
    }

    // 检查这4位数字不能都是奇数，也不能都是偶数
    if ((digits[0] % 2 == 0 && digits[1] % 2 == 0 && digits[2] % 2 == 0 && digits[3] % 2 == 0) ||
        (digits[0] % 2 != 0 && digits[1] % 2 != 0 && digits[2] % 2 != 0 && digits[3] % 2 != 0)) {
        return 0;
    }

    return 1;
}

void find_numbers_in_range(int a, int b) {
    int i;
    for (i = a; i <= b; i++) {
        if (is_valid(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int a, b;
    scanf("%d %d",&a,&b);
    find_numbers_in_range(a, b);
    return 0;
}
