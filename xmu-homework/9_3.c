#include <stdio.h>
//函数实现写在这里
void fun(int a,int b,long *c)
{
    long gewei = b % 10;
    long shiwei = a / 10;
    long baiwei = b / 10;
    long qianwei = a % 10;
    *c = gewei + shiwei * 10 + baiwei * 100 + qianwei * 1000;
}



int main()
{
    int a,b;
    long c;
    scanf("%d%d",&a,&b);
    fun(a,b,&c);
    printf("%d",c);
    printf("\n");
    return 0;
}