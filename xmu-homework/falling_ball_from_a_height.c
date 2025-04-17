#include <stdio.h>

int main(void)
{
    double height, n, distance_total;
    scanf("%lf %lf", &height, &n);
    distance_total = height;
    if(n == 0)//¿¼ÂÇn=0µÄÇé¿ö
    {
        printf("0.0 0.0");
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        height = height / 2;
        distance_total += height * 2;
    }
    printf("%.1f %.1f", distance_total, height / 2.0);
    return 0;
}