#include <stdio.h>

//函数实现写在这里
float fun(int a[],int n,int *max,int *min)
{
    *max = a[0];
    *min = a[0];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
        if (a[i] < *min)
        {
            *min = a[i];
        }
        sum += a[i];
    }
    float average = sum / 10.0;
    return average;
}


int main()
{
    int x[10],i,m,n;
    float p;
    for(i=0;i<10;i++)
    {
    scanf("%d",&x[i]);
    }
    p = fun(x,10,&m,&n);
    printf("max=%d,min=%d,average=%.2f\n",m,n,p);
    return 0;
}