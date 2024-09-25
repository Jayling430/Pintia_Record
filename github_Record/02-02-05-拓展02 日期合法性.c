#include <stdio.h>

int main() {
    int month, day,year;

    // 读取输入
    scanf("%d %d %d",&year, &month, &day);

    // 判断是否为合法日期
    int isLegal = 0;
    if (month >= 1 && month <= 12) {
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day >= 1 && day <= 31)) {
            isLegal = 1;
        } else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30)) {
            isLegal = 1;
        } else if (month == 2) {
            if ((day >= 1 && day <= 28)) {
                isLegal = 1;
            } else if (day == 29) {
                // 判断闰年
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                    isLegal = 1;
                }
            }
        }
    }

    // 输出结果
    if (isLegal) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}