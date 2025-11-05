#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int num;
    scanf("%d", &num);

    int score[num];

    for (int i = 0; i < num; i++) scanf("%d", &score[i]);
    
    int min = INT_MAX;
    int max = 0;
    for (int i = 0; i < num; i++)
    {
        if (max < score[i]) max = score[i];
        
        if (min > score[i]) min = score[i];
    }
    int sum = 0;

    for (int i = 0; i < num; i++) sum += score[i];

    sum -= max + min;
    float result = (float)sum / (num - 2);
    printf("%.2f", result);

    return 0;
}