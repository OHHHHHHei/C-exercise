#include <stdio.h>

 

//函数实现写在这里
void sum_diff(float op1, float op2, float *pum, float *pidff)
{
    *pum = op1 + op2;
    *pidff = op1 - op2;
}
 

int main()
{
    float a, b, sum, diff;
    scanf("%f %f", &a, &b);
    sum_diff(a, b, &sum, &diff);
    printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);
    return 0;
}