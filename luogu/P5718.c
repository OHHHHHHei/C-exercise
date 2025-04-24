#include <stdio.h>


int main(void)
{
    int n;
    scanf("%i", &n);
    int min;
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%i",&num);
        if(i == 0)
        {
            min = num;
        }
        if(num < min)
        {
            min = num;
        }
    }
    printf("%i", min);
    return 0;
}