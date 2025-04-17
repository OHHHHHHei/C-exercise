#include <stdio.h>

int main()
{
    int i, j, k, sum;
    for(i = 1; i <= 1000; i++)//从1开始循环到n
    {
        sum = 0;//初始化sum
        k = 0;//初始化k
        j = 1;//初始化j
        int factor[i];//因数数量不会大于自己
        while(j <= i)//找到这个i的所有因数
        {
            if(i % j == 0)
            {
                factor[k] = j;
                k++;
            }
            j++;
        }
        for(int m = 0; m < k - 1; m++)//将因数相加，且不加自身
        {
            sum += factor[m];
        }
        if(sum == i)//验证是否为完数
        {
            printf("%i ,", i);
            printf("Its factors are ");
            for(int m = 0; m < k - 1; m++)//打印因数
            {
                printf("%i", factor[m]);
                if(m != k - 2)
                {
                    printf(",");//打印逗号
                }
            }
            printf("\n");

        }
    }
    return 0;
}