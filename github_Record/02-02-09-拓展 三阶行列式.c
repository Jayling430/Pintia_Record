#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    // 读取输入
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 计算行列式的值
    int det = 0;
    det = matrix[0][0] * matrix[1][1] * matrix[2][2] +
          matrix[0][1] * matrix[1][2] * matrix[2][0] +
          matrix[0][2] * matrix[1][0] * matrix[2][1] -
          matrix[0][2] * matrix[1][1] * matrix[2][0] -
          matrix[0][0] * matrix[1][2] * matrix[2][1] -
          matrix[0][1] * matrix[1][0] * matrix[2][2];

    // 输出结果
    printf("%d\n", det);

    return 0;
}
