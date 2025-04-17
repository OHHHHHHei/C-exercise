#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // 对三边进行完整的排序，使 a ≤ b ≤ c
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
    if (a > b) {  // 再次检查a和b，因为c的交换可能影响顺序
        int temp = a;
        a = b;
        b = temp;
    }

    // 按题目要求顺序判断并输出
    // 1. 首先判断是否能构成三角形
    if (a + b <= c) {
        printf("Not triangle\n");
        return 0;
    }

    // 2. 判断角的类型（直角、锐角、钝角）
    if (a * a + b * b == c * c) {
        printf("Right triangle\n");
    }
    else if (a * a + b * b > c * c) {
        printf("Acute triangle\n");
    }
    else {
        printf("Obtuse triangle\n");
    }

    // 3. 判断边的关系（等腰、等边）
    if (a == b || b == c || a == c) {
        printf("Isosceles triangle\n");
    }
    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    }

    return 0;
}