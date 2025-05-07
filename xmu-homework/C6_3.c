#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    
    // ����N��N����
    int matrix[10][10] = {0};  // ��Ŀ����N<=10
    
    int num = 1;  // ��1��ʼ���
    
    // �����ĸ��߽�
    int top = 0, bottom = N - 1;
    int left = 0, right = N - 1;
    
    // ����������
    while (num <= N * N) {
        // �����ƶ�
        for (int j = left; j <= right; j++) {
            matrix[top][j] = num++;
        }
        top++;
        
        // �����ƶ�
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;
        
        // �Ѿ����������˳�
        if (top > bottom || left > right) break;
        
        // �����ƶ�
        for (int j = right; j >= left; j--) {
            matrix[bottom][j] = num++;
        }
        bottom--;
        
        // �����ƶ�
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }
    
    // ����ʽ�����������
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d", matrix[i][j]);  // ȷ��ÿ������ռ3λ
        }
        printf("\n");
    }
    
    return 0;
}