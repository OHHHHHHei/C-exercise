#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    
    // 创建N×N矩阵
    int matrix[10][10] = {0};  // 题目限制N<=10
    
    int num = 1;  // 从1开始填充
    
    // 定义四个边界
    int top = 0, bottom = N - 1;
    int left = 0, right = N - 1;
    
    // 螺旋填充矩阵
    while (num <= N * N) {
        // 向右移动
        for (int j = left; j <= right; j++) {
            matrix[top][j] = num++;
        }
        top++;
        
        // 向下移动
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;
        
        // 已经填充完毕则退出
        if (top > bottom || left > right) break;
        
        // 向左移动
        for (int j = right; j >= left; j--) {
            matrix[bottom][j] = num++;
        }
        bottom--;
        
        // 向上移动
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }
    
    // 按格式输出螺旋方阵
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d", matrix[i][j]);  // 确保每个数字占3位
        }
        printf("\n");
    }
    
    return 0;
}