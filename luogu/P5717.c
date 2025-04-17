#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // �����߽�������������ʹ a �� b �� c
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {  // �ٴμ��a��b����Ϊc�Ľ�������Ӱ��˳��
        int temp = a;
        a = b;
        b = temp;
    }

    // ����ĿҪ��˳���жϲ����
    // 1. �����ж��Ƿ��ܹ���������
    if (a + b <= c) {
        printf("Not triangle\n");
        return 0;
    }

    // 2. �жϽǵ����ͣ�ֱ�ǡ���ǡ��۽ǣ�
    if (a * a + b * b == c * c) {
        printf("Right triangle\n");
    }
    else if (a * a + b * b > c * c) {
        printf("Acute triangle\n");
    }
    else {
        printf("Obtuse triangle\n");
    }

    // 3. �жϱߵĹ�ϵ���������ȱߣ�
    if (a == b || b == c || a == c) {
        printf("Isosceles triangle\n");
    }
    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    }

    return 0;
}