#include <stdio.h>

 

//函数实现写在此处
void findmax(int *px, int *py, int *pmax)
{
    if (*px >= *py)
    {
        *pmax = *px;
    } else {
        *pmax = *py;
    }
    return;
}

int main()
{ 
    int max, x, y;
    scanf("%d %d", &x, &y);
    findmax(&x, &y, &max);
    printf("%d\n", max);
    return 0;
}